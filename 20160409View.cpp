// 20160409View.cpp : implementation of the CMy20160409View class
//

#include "stdafx.h"
#include "20160409.h"

#include "20160409Doc.h"
#include "20160409View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMy20160409View

IMPLEMENT_DYNCREATE(CMy20160409View, CView)

BEGIN_MESSAGE_MAP(CMy20160409View, CView)
	//{{AFX_MSG_MAP(CMy20160409View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy20160409View construction/destruction

CMy20160409View::CMy20160409View()
{
	// TODO: add construction code here

}

CMy20160409View::~CMy20160409View()
{
}

BOOL CMy20160409View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMy20160409View drawing

void CMy20160409View::OnDraw(CDC* pDC)
{
	CMy20160409Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	pDC->Rectangle(1,1,100,100);

	//////////////////////////////////////////////////////////////////////////
	//another rectangle
	CClientDC dc(this);
	
	CPen pen(PS_SOLID,1,RGB(0,255,0));
	
	CPen *pOldPen=dc.SelectObject(&pen);
	
	CBrush *pBrush=CBrush::FromHandle((HBRUSH)
		
		GetStockObject(NULL_BRUSH));
	
	CBrush *pOldBrush=dc.SelectObject(pBrush);
	
	dc.Rectangle(50,50,150,150);
	dc.Rectangle(60,60,160,160);
	dc.Rectangle(70,70,170,170);
	dc.SetBkMode(TRANSPARENT);
	dc.TextOut(60,60,"test how the text cover!");
	dc.SelectObject(pOldPen);
	dc.SelectObject(pOldBrush);



}

/////////////////////////////////////////////////////////////////////////////
// CMy20160409View printing

BOOL CMy20160409View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMy20160409View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMy20160409View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMy20160409View diagnostics

#ifdef _DEBUG
void CMy20160409View::AssertValid() const
{
	CView::AssertValid();
}

void CMy20160409View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy20160409Doc* CMy20160409View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy20160409Doc)));
	return (CMy20160409Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMy20160409View message handlers
