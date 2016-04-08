// 20160409Doc.cpp : implementation of the CMy20160409Doc class
//

#include "stdafx.h"
#include "20160409.h"

#include "20160409Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMy20160409Doc

IMPLEMENT_DYNCREATE(CMy20160409Doc, CDocument)

BEGIN_MESSAGE_MAP(CMy20160409Doc, CDocument)
	//{{AFX_MSG_MAP(CMy20160409Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy20160409Doc construction/destruction

CMy20160409Doc::CMy20160409Doc()
{
	// TODO: add one-time construction code here

}

CMy20160409Doc::~CMy20160409Doc()
{
}

BOOL CMy20160409Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMy20160409Doc serialization

void CMy20160409Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CMy20160409Doc diagnostics

#ifdef _DEBUG
void CMy20160409Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMy20160409Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMy20160409Doc commands
