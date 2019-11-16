
// TestViewDocView.cpp : CTestViewDocView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "TestViewDoc.h"
#endif

#include "TestViewDocDoc.h"
#include "TestViewDocView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTestViewDocView

IMPLEMENT_DYNCREATE(CTestViewDocView, CView)

BEGIN_MESSAGE_MAP(CTestViewDocView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CTestViewDocView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CTestViewDocView ����/����

CTestViewDocView::CTestViewDocView()
{
	// TODO: �ڴ˴���ӹ������

}

CTestViewDocView::~CTestViewDocView()
{
}

BOOL CTestViewDocView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CTestViewDocView ����

void CTestViewDocView::OnDraw(CDC* pDC)
{
	CTestViewDocDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���

	pDC->TextOutW(100,100,_T("����"));


	pDC->MoveTo(100,100);

	pDC->LineTo(1000,1000);
}


// CTestViewDocView ��ӡ


void CTestViewDocView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CTestViewDocView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CTestViewDocView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CTestViewDocView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}

void CTestViewDocView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CTestViewDocView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CTestViewDocView ���

#ifdef _DEBUG
void CTestViewDocView::AssertValid() const
{
	CView::AssertValid();
}

void CTestViewDocView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTestViewDocDoc* CTestViewDocView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTestViewDocDoc)));
	return (CTestViewDocDoc*)m_pDocument;
}
#endif //_DEBUG


// CTestViewDocView ��Ϣ�������


void CTestViewDocView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonDown(nFlags, point);
}
