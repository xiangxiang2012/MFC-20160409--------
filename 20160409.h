// 20160409.h : main header file for the 20160409 application
//

#if !defined(AFX_20160409_H__63A28873_8F9E_4BCB_A6AD_AC5451432C05__INCLUDED_)
#define AFX_20160409_H__63A28873_8F9E_4BCB_A6AD_AC5451432C05__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMy20160409App:
// See 20160409.cpp for the implementation of this class
//

class CMy20160409App : public CWinApp
{
public:
	CMy20160409App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy20160409App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMy20160409App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_20160409_H__63A28873_8F9E_4BCB_A6AD_AC5451432C05__INCLUDED_)
