#pragma once


// CDiaTestCombox 对话框

class CDiaTestCombox : public CDialogEx
{
	DECLARE_DYNAMIC(CDiaTestCombox)

public:
	CDiaTestCombox(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDiaTestCombox();

// 对话框数据
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
