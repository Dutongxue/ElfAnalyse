
// ElfAnalyse.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CElfAnalyseApp:
// �йش����ʵ�֣������ ElfAnalyse.cpp
//

class CElfAnalyseApp : public CWinApp
{
public:
	CElfAnalyseApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CElfAnalyseApp theApp;