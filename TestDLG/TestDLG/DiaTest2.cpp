// DiaTest2.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "TestDLG.h"
#include "DiaTest2.h"
#include "afxdialogex.h"


// CDiaTest2 �Ի���

IMPLEMENT_DYNAMIC(CDiaTest2, CDialogEx)

CDiaTest2::CDiaTest2(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDiaTest2::IDD, pParent)
{

}

CDiaTest2::~CDiaTest2()
{
}

void CDiaTest2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDiaTest2, CDialogEx)
END_MESSAGE_MAP()


// CDiaTest2 ��Ϣ�������


BOOL CDiaTest2::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��


	((CComboBox*)this->GetDlgItem(IDC_COM_TEST2))->AddString(_T("1"));
	((CComboBox*)this->GetDlgItem(IDC_COM_TEST2))->AddString(_T("2"));
	((CComboBox*)this->GetDlgItem(IDC_COM_TEST2))->AddString(_T("3"));

	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣: OCX ����ҳӦ���� FALSE
}
