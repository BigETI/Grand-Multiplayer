#ifndef __H_API__
#define __H_API__
#include <vector>

class CAPI
{
private:
	std::string Module;
	void*		Instance;

public:
	CAPI();
	~CAPI();

	bool Load();
	bool Unload(); //Inteli seems to think there is no body for this???

	bool Initialize();
	bool Close();
	bool OnTick();

	void* GetInstance() { return Instance;  }

	std::string ModuleName() { return Module; }
	void SetModuleName(std::string _module) { Module = _module; }

	bool IsLoaded() { return Instance; }
};
extern std::vector<CAPI> g_ApiModules;
#endif