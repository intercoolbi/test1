#pragma once


// CDiaTestCombox �Ի���

class CDiaTestCombox : public CDialogEx
{
	DECLARE_DYNAMIC(CDiaTestCombox)

public:
	CDiaTestCombox(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDiaTestCombox();

// �Ի�������
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
