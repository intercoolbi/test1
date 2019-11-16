
// TestViewDocView.h : CTestViewDocView ��Ľӿ�
//

#pragma once


class CTestViewDocView : public CView
{
protected: // �������л�����
	CTestViewDocView();
	DECLARE_DYNCREATE(CTestViewDocView)

// ����
public:
	CTestViewDocDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CTestViewDocView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // TestViewDocView.cpp �еĵ��԰汾
inline CTestViewDocDoc* CTestViewDocView::GetDocument() const
   { return reinterpret_cast<CTestViewDocDoc*>(m_pDocument); }
#endif

