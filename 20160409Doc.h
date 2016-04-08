// 20160409Doc.h : interface of the CMy20160409Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_20160409DOC_H__32F1E0C0_725B_4AE9_9C50_61FD729B3B3F__INCLUDED_)
#define AFX_20160409DOC_H__32F1E0C0_725B_4AE9_9C50_61FD729B3B3F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMy20160409Doc : public CDocument
{
protected: // create from serialization only
	CMy20160409Doc();
	DECLARE_DYNCREATE(CMy20160409Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy20160409Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMy20160409Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMy20160409Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_20160409DOC_H__32F1E0C0_725B_4AE9_9C50_61FD729B3B3F__INCLUDED_)
