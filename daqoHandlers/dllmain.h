// dllmain.h: 模块类的声明。

class CdaqoHandlersModule : public ATL::CAtlDllModuleT< CdaqoHandlersModule >
{
public :
	DECLARE_LIBID(LIBID_daqoHandlersLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_DAQOHANDLERS, "{3CA50595-4B10-4CEE-87F7-14EB0B8FBEAC}")
};

extern class CdaqoHandlersModule _AtlModule;
