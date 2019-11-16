
// TestDLGDlg.h : 头文件
//

#pragma once
#include "afxwin.h"


// CTestDLGDlg 对话框
class CTestDLGDlg : public CDialogEx
{
// 构造
public:
	CTestDLGDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_TESTDLG_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDestroy();
	afx_msg void OnBnClickedButOpenFile();


public:
	CButton m_ctrButOpenFile;//asdfsad 


	double m_dBodyHeight;
	afx_msg void OnBnClickedOk();

public:
	int m_nAge;

public:
	int GetAge();

	CComboBox m_comboxNames;
};
