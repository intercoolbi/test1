
// TestDLGDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CTestDLGDlg �Ի���
class CTestDLGDlg : public CDialogEx
{
// ����
public:
	CTestDLGDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_TESTDLG_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
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
