params["_zed"];

if(!DSZ_allow_Agro) exitWith {systemchat "AGRO DISABLED";};

_zed setVariable ["agroed",true,true];
if(!local group _zed) then {
	[player,_zed] remoteExecCall ["DSZ_fnc_toClient",2];
	waitUntil{local group _zed};
};

_zed forceSpeed (_zed getSpeed "SLOW");

_animevh = _zed addEventHandler ["AnimChanged",{
	params["_zed","_anim"];
	
	//prevent zombie from ever walking when agroed
	if(_zed distance player > 2) then {
		if(_anim == "dsr_Zomb_Walk") then {
			_zed playMove "dsr_Zomb_Walk";
		};
	};
	
}];
_zed setVariable ["animEVH",_animevh];

_group = group _zed;

while{(count (waypoints _group)) > 0} do {
	deleteWaypoint ((waypoints _group) select 0);
};

_zed disableCollisionWith player;

[_zed,player] execFSM "DSR_Zombz_Code\fsm\dszBrain.fsm";