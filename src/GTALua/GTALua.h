// =================================================================================
// Global module related Defines 
// =================================================================================

#define MODULE_NAME "GTALua"			// Module name for ScriptHookV
#define MODULE_EXTENSION "%s.asi"		// Module extension, default is %s.asi
#define APP_NAME "GTALua-Online"		// Short name, default is GTALua
#define APP_VERSION "1.0.944.2"			// Version (following the game's version)
#define APP_FULLNAME APP_NAME " - Version " APP_VERSION

//#define MP_VEHICLE_GLOBAL 0x271803		// Global to allow for spawning online DLC vehicles offline (757.4 / 1.34)
//#define MP_VEHICLE_GLOBAL 0x272A34		// Global to allow for spawning online DLC vehicles offline (791.2 / 1.35)
//#define MP_VEHICLE_GLOBAL 0x2750BD		// Global to allow for spawning online DLC vehicles offline (877.1 / 1.36)
#define MP_VEHICLE_GLOBAL 0x279476			// Global to allow for spawning online DLC vehicles offline (944.2 / 1.37)

#define HAS_ONLINE_CAPABILITIES			// Defined to allow for spawning vehicles online

// =================================================================================
// Console related 
// =================================================================================
#define CONSOLE_SEPARATOR "==============================================\n"

// =================================================================================
// GTALua.ini 
// =================================================================================
struct GTALuaConfig						// Struct to contain the configuration from the GTALua.ini file
{
	// Console
	bool bConsole_Enabled;
	bool bConsole_AutomaticPosition;
	int iConsole_PosX;
	int iConsole_PosY;
	int iConsole_SizeX;
	int iConsole_SizeY;

	// Game
	bool bGame_SkipIntro;
};

// =================================================================================
// GTALua 
// =================================================================================
class GTALua
{
public:
	GTALua();
	~GTALua();

	// Init
	void Init();
	void ProperInit();
	void InitAddons();

	// Update
	void Update();
	void UpdateLoop();
	void ProcessConsoleInput();

	// Game Version
	bool VersionCheck();
	char* GetGameVersion();

	// Configuration file(s)
	void LoadGTALuaIni();
	GTALuaConfig* GetConfig() { return &m_sConfig; };
	void LoadNativesINI();
	void LoadCallLayoutsINI();

private:
	bool m_bActive;
	GTALuaConfig m_sConfig;
};

// =================================================================================
// API 
// =================================================================================
namespace API
{
	static vector<char*> vLoadQueue;
	void LoadQueuedAddons();
}

// =================================================================================
// Global Instance 
// =================================================================================
extern GTALua* g_pGTALua;