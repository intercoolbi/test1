// DiaTest2.cpp : 实现文件
//

#include "stdafx.h"
#include "TestDLG.h"
#include "DiaTest2.h"
#include "afxdialogex.h"


// CDiaTest2 对话框

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


// CDiaTest2 消息处理程序


BOOL CDiaTest2::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化


	((CComboBox*)this->GetDlgItem(IDC_COM_TEST2))->AddString(_T("1"));
	((CComboBox*)this->GetDlgItem(IDC_COM_TEST2))->AddString(_T("2"));
	((CComboBox*)this->GetDlgItem(IDC_COM_TEST2))->AddString(_T("3"));

	return TRUE;  // return TRUE unless you set the focus to a control
	// 异常: OCX 属性页应返回 FALSE
}
