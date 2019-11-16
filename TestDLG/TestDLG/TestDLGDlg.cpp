
// TestDLGDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "TestDLG.h"
#include "TestDLGDlg.h"
#include "afxdialogex.h"
#include "DiaTest2.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
public:

};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
	 
END_MESSAGE_MAP()


// CTestDLGDlg 对话框




CTestDLGDlg::CTestDLGDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CTestDLGDlg::IDD, pParent)
	, m_dBodyHeight(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);

	m_dBodyHeight = 9;
}

void CTestDLGDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUT_OPEN_FILE, m_ctrButOpenFile);
	DDX_Text(pDX, IDC_EDIT1, m_dBodyHeight);
	DDV_MinMaxDouble(pDX, m_dBodyHeight, 0, 3000);
	DDX_Control(pDX, IDC_COMBO1, m_comboxNames);
}

BEGIN_MESSAGE_MAP(CTestDLGDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_DESTROY()
	ON_BN_CLICKED(IDC_BUT_OPEN_FILE, &CTestDLGDlg::OnBnClickedButOpenFile)
	ON_BN_CLICKED(IDOK, &CTestDLGDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// CTestDLGDlg 消息处理程序

BOOL CTestDLGDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码
	m_dBodyHeight = 90;


	m_comboxNames.AddString(_T("1"));
	m_comboxNames.AddString(_T("2"));	
	m_comboxNames.AddString(_T("11"));
	m_comboxNames.AddString(_T("22"));

	UpdateData(0);

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CTestDLGDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CTestDLGDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CTestDLGDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CTestDLGDlg::OnDestroy()
{
	CDialogEx::OnDestroy();

	// TODO: 在此处添加消息处理程序代码

	////////////////////////////////////////////////////////////////////////////
}


void CTestDLGDlg::OnBnClickedButOpenFile()
{
	// TODO: 在此添加控件通知处理程序代码

	//
	///

	CDiaTest2* pdlg = new CDiaTest2;
	 
	pdlg->Create(IDD_DIALOG2);
	pdlg->ShowWindow(SW_NORMAL);

	return;

	CDiaTest2 dlg;
	if(dlg.DoModal() == IDOK)
	{

		//处理

		CString str;

	//	((CComboBox*)dlg.GetDlgItem(IDC_COM_TEST2))->GetWindowTextW(str);
		int n = dlg.m_nAge;

	}
	((CStatic*)GetDlgItem(IDC_STATIC_MY1))->SetWindowText(_T("asdfasdfas"));
	
}


void CTestDLGDlg::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(1);
//	UpdateData();

	double d = m_dBodyHeight; 

	CString strName;

//	m_comboxNames.GetWindowTextW(strName);

	int nIndex = m_comboxNames.GetCurSel();
	m_comboxNames.GetLBText(nIndex,strName);

	CDialogEx::OnOK();
}

