// Emulator.h : Emulator 응용 프로그램에 대한 주 헤더 파일
//
#pragma once
#import <IOSTREAM>

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // 주 기호




class CEmulatorApp : public CWinApp
{
public:
	void  SetActive(BOOL bActive) { m_bIsActive = bActive; };

public:
	BOOL  m_bIsActive;

	CString	m_strAppPath;
	char	m_szAppPath[MAX_PATH];

public:
	CEmulatorApp();


// 재정의
public:
	virtual BOOL InitInstance();

// 구현
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
	virtual int Run();
};

extern CEmulatorApp theApp;
