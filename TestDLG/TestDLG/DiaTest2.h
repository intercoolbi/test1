#pragma once


// CDiaTest2 �Ի���

class CDiaTest2 : public CDialogEx
{
	DECLARE_DYNAMIC(CDiaTest2)

public:
	CDiaTest2(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDiaTest2();

// �Ի�������
	enum { IDD = IDD_DIALOG2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();

	int m_nAge;
};
