// DiaTestCombox.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "TestDLG.h"
#include "DiaTestCombox.h"
#include "afxdialogex.h"


// CDiaTestCombox �Ի���

IMPLEMENT_DYNAMIC(CDiaTestCombox, CDialogEx)

CDiaTestCombox::CDiaTestCombox(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDiaTestCombox::IDD, pParent)
{
	/*((CComboBox*)this->GetDlgItem(IDC_COMBO1))->AddString(_T("1"));
	((CComboBox*)this->GetDlgItem(IDC_COMBO1))->AddString(_T("2"));
	((CComboBox*)this->GetDlgItem(IDC_COMBO1))->AddString(_T("3"));*/
}

CDiaTestCombox::~CDiaTestCombox()
{
}

void CDiaTestCombox::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDiaTestCombox, CDialogEx)
END_MESSAGE_MAP()


// CDiaTestCombox ��Ϣ�������
