

//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		






class CMyPaintApp : public CWinApp
{
public:
	CMyPaintApp();


public:
	virtual BOOL InitInstance();



	DECLARE_MESSAGE_MAP()
};

extern CMyPaintApp theApp;