class CfgPatches
{
	class DSZombz {units[] = {};};
};

class Plugins
{
	class DSZombz
	{
		name = "DSZombz";
		desc = "Recoded SM_Zombz AI";
		tag = "DSZ";
	};
};
class CfgPluginEvents {
	class PlayerEvents {
		overrides = 0;
		class Events {
			class DSZ_Fired {
				type = "Fired";
				function = "DSZ_fnc_onWeaponFired";
			};
		};
	};
};
class CfgFunctions
{
	class DSZ
	{
		// CLIENT CODE
		class Client 
		{
			file = "DSZombz\Client";
			isclient = 1;
			class initClient {};
		};
		class Client_Events
		{
			file = "DSZombz\Client\Events";
			isclient = 1;
			class onWeaponFired {};
		};
		class Client_Sensing
		{
			file = "DSZombz\Client\Sensing";
			isclient = 1;
			class zombieCanSee {};
			class zombieCanHear {};
			class zombieCanSmell {};
		};
		class Client_Agroing
		{
			file = "DSZombz\Client\Agroing";
			isclient = 1;
			class agroCheck {};
			class agroZombie {};
			class deagroZombie {};
		};
		class Client_Actions
		{
			file = "DSZombz\Client\Actions";
			isclient = 1;
			class zombieAttack {};
		};
		// SERVER CODE
		class Server 
		{
			file = "DSZombz\Server";
			isserver = 1;
			class initServer {};
		};
		class Server_Events 
		{
			file = "DSZombz\Server\Events";
			isserver = 1;
			class killZombie {};
		};
		class Server_Spawning
		{
			file = "DSZombz\Server\Spawning";
			isserver = 1;
			class spawnZombie {};
			class insertZombie {};
			class spawnManager {};
			class createHolder {};
			class despawnZombie {};
		};
		class Server_Locality
		{
			file = "DSZombz\Server\Locality";
			isserver = 1;
			class fromClient {};
			class toClient {};
		};
		class Server_Initialization
		{
			file = "DSZombz\Server\Initialization";
			isserver = 1;
			class readConfig {};
			class selectLocations {};
		};
		
		// BOTH CODE
		class Both 
		{
			file = "DSZombz\Both";
			isclient = 1;
			class getNearMen {};
			class getNearPlayers {};
			class isPlayerNear {};
			class initRoaming {};
		};
	};
};

class CfgZombies 
{
	class DSR_Citizen1 {
		AgroMode = "PASSIVE"; //agro mode (AGRESSIVE / NORMAL / PASSIVE)
	}; 
	class DSR_Citizen2 {
		AgroMode = "PASSIVE"; //agro mode (AGRESSIVE / NORMAL / PASSIVE)
	}; 
	class DSR_Citizen3 {
		AgroMode = "PASSIVE"; //agro mode (AGRESSIVE / NORMAL / PASSIVE)
	}; 
	class DSR_Citizen4 {
		AgroMode = "PASSIVE"; //agro mode (AGRESSIVE / NORMAL / PASSIVE)
	}; 
	class DSR_Worker1 {
		AgroMode = "PASSIVE"; //agro mode (AGRESSIVE / NORMAL / PASSIVE)
	}; 
	class DSR_Worker2 {
		AgroMode = "PASSIVE"; //agro mode (AGRESSIVE / NORMAL / PASSIVE)
	}; 
	class DSR_Worker3 {
		AgroMode = "PASSIVE"; //agro mode (AGRESSIVE / NORMAL / PASSIVE)
	}; 
	class DSR_Worker4 {
		AgroMode = "PASSIVE"; //agro mode (AGRESSIVE / NORMAL / PASSIVE)
	}; 
	class DSR_Profiteer1 {
		AgroMode = "PASSIVE"; //agro mode (AGRESSIVE / NORMAL / PASSIVE)
	}; 
	class DSR_Profiteer2 {
		AgroMode = "PASSIVE"; //agro mode (AGRESSIVE / NORMAL / PASSIVE)
	}; 
	class DSR_Profiteer3 {
		AgroMode = "PASSIVE"; //agro mode (AGRESSIVE / NORMAL / PASSIVE)
	}; 
	class DSR_Profiteer4 {
		AgroMode = "PASSIVE"; //agro mode (AGRESSIVE / NORMAL / PASSIVE)
	}; 
	class DSR_Woodlander1 {
		AgroMode = "PASSIVE"; //agro mode (AGRESSIVE / NORMAL / PASSIVE)
	}; 
	class DSR_Woodlander2 {
		AgroMode = "PASSIVE"; //agro mode (AGRESSIVE / NORMAL / PASSIVE)
	}; 
	class DSR_Woodlander3 {
		AgroMode = "PASSIVE"; //agro mode (AGRESSIVE / NORMAL / PASSIVE)
	}; 
	class DSR_Woodlander4 {
		AgroMode = "PASSIVE"; //agro mode (AGRESSIVE / NORMAL / PASSIVE)
	}; 
	class DSR_Functionary1 {
		AgroMode = "PASSIVE"; //agro mode (AGRESSIVE / NORMAL / PASSIVE)
	}; 
	class DSR_Functionary2 {
		AgroMode = "PASSIVE"; //agro mode (AGRESSIVE / NORMAL / PASSIVE)
	}; 
	class DSR_Villager1 {
		AgroMode = "PASSIVE"; //agro mode (AGRESSIVE / NORMAL / PASSIVE)
	}; 
	class DSR_Villager2 {
		AgroMode = "PASSIVE"; //agro mode (AGRESSIVE / NORMAL / PASSIVE)
	}; 
	class DSR_Villager3 {
		AgroMode = "PASSIVE"; //agro mode (AGRESSIVE / NORMAL / PASSIVE)
	}; 
	class DSR_Villager4 {
		AgroMode = "PASSIVE"; //agro mode (AGRESSIVE / NORMAL / PASSIVE)
	};  
	class DSR_Priest {
		AgroMode = "PASSIVE"; //agro mode (AGRESSIVE / NORMAL / PASSIVE)
	};  
	class DSR_Policeman {
		AgroMode = "PASSIVE"; //agro mode (AGRESSIVE / NORMAL / PASSIVE)
	};  
	class DSR_Doctor {
		AgroMode = "PASSIVE"; //agro mode (AGRESSIVE / NORMAL / PASSIVE)
	};  
	class DSR_SchoolTeacher {
		AgroMode = "PASSIVE"; //agro mode (AGRESSIVE / NORMAL / PASSIVE)
	};  
	class DSR_Assistant {
		AgroMode = "PASSIVE"; //agro mode (AGRESSIVE / NORMAL / PASSIVE)
	};
};