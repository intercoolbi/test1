
// TestViewDocView.cpp : CTestViewDocView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CTestViewDocView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CTestViewDocView 构造/析构

CTestViewDocView::CTestViewDocView()
{
	// TODO: 在此处添加构造代码

}

CTestViewDocView::~CTestViewDocView()
{
}

BOOL CTestViewDocView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CTestViewDocView 绘制

void CTestViewDocView::OnDraw(CDC* pDC)
{
	CTestViewDocDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码

	pDC->TextOutW(100,100,_T("测试"));


	pDC->MoveTo(100,100);

	pDC->LineTo(1000,1000);
}


// CTestViewDocView 打印


void CTestViewDocView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CTestViewDocView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CTestViewDocView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CTestViewDocView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
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


// CTestViewDocView 诊断

#ifdef _DEBUG
void CTestViewDocView::AssertValid() const
{
	CView::AssertValid();
}

void CTestViewDocView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTestViewDocDoc* CTestViewDocView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTestViewDocDoc)));
	return (CTestViewDocDoc*)m_pDocument;
}
#endif //_DEBUG


// CTestViewDocView 消息处理程序


void CTestViewDocView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonDown(nFlags, point);
}
