// dllmain.cpp: DllMain 的实现。

#include "stdafx.h"
#include "resource.h"
#include "daqoHandlers_i.h"
#include "dllmain.h"
#include "xdlldata.h"

CdaqoHandlersModule _AtlModule;

class CdaqoHandlersApp : public CWinApp
{
public:

// 重写
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(CdaqoHandlersApp, CWinApp)
END_MESSAGE_MAP()

CdaqoHandlersApp theApp;

BOOL CdaqoHandlersApp::InitInstance()
{
	if (!PrxDllMain(m_hInstance, DLL_PROCESS_ATTACH, NULL))
		return FALSE;
	return CWinApp::InitInstance();
}

int CdaqoHandlersApp::ExitInstance()
{
	return CWinApp::ExitInstance();
}
