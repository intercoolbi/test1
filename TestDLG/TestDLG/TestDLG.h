
// TestDLG.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CTestDLGApp:
// �йش����ʵ�֣������ TestDLG.cpp
//

class CTestDLGApp : public CWinApp
{
public:
	CTestDLGApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CTestDLGApp theApp;