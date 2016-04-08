// 20160409View.h : interface of the CMy20160409View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_20160409VIEW_H__C56C2407_A404_4623_9661_B02D4F877791__INCLUDED_)
#define AFX_20160409VIEW_H__C56C2407_A404_4623_9661_B02D4F877791__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMy20160409View : public CView
{
protected: // create from serialization only
	CMy20160409View();
	DECLARE_DYNCREATE(CMy20160409View)

// Attributes
public:
	CMy20160409Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy20160409View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMy20160409View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMy20160409View)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in 20160409View.cpp
inline CMy20160409Doc* CMy20160409View::GetDocument()
   { return (CMy20160409Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_20160409VIEW_H__C56C2407_A404_4623_9661_B02D4F877791__INCLUDED_)
