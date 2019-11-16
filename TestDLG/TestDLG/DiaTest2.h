#pragma once


// CDiaTest2 对话框

class CDiaTest2 : public CDialogEx
{
	DECLARE_DYNAMIC(CDiaTest2)

public:
	CDiaTest2(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDiaTest2();

// 对话框数据
	enum { IDD = IDD_DIALOG2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();

	int m_nAge;
};
