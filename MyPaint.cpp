



#include "stdafx.h"
#include "MyPaint.h"
#include "MyPaintDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif




BEGIN_MESSAGE_MAP(CMyPaintApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()




CMyPaintApp::CMyPaintApp()
{
	
	m_dwRestartManagerSupportFlags = AFX_RESTART_MANAGER_SUPPORT_RESTART;

	
}


 

CMyPaintApp theApp;



BOOL CMyPaintApp::InitInstance()
{
	
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinApp::InitInstance();


	AfxEnableControlContainer();

	
	CShellManager *pShellManager = new CShellManager;

	
	SetRegistryKey(_T("Local AppWizard-Generated Applications"));

	CMyPaintDlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		
	}

	
	if (pShellManager != NULL)
	{
		delete pShellManager;
	}

	
	return FALSE;
}

