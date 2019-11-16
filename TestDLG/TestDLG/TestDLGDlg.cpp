
// TestDLGDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "TestDLG.h"
#include "TestDLGDlg.h"
#include "afxdialogex.h"
#include "DiaTest2.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
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


// CTestDLGDlg �Ի���




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


// CTestDLGDlg ��Ϣ�������

BOOL CTestDLGDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
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

	// ���ô˶Ի����ͼ�ꡣ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������
	m_dBodyHeight = 90;


	m_comboxNames.AddString(_T("1"));
	m_comboxNames.AddString(_T("2"));	
	m_comboxNames.AddString(_T("11"));
	m_comboxNames.AddString(_T("22"));

	UpdateData(0);

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
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

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CTestDLGDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CTestDLGDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CTestDLGDlg::OnDestroy()
{
	CDialogEx::OnDestroy();

	// TODO: �ڴ˴������Ϣ����������

	////////////////////////////////////////////////////////////////////////////
}


void CTestDLGDlg::OnBnClickedButOpenFile()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������

	//
	///

	CDiaTest2* pdlg = new CDiaTest2;
	 
	pdlg->Create(IDD_DIALOG2);
	pdlg->ShowWindow(SW_NORMAL);

	return;

	CDiaTest2 dlg;
	if(dlg.DoModal() == IDOK)
	{

		//����

		CString str;

	//	((CComboBox*)dlg.GetDlgItem(IDC_COM_TEST2))->GetWindowTextW(str);
		int n = dlg.m_nAge;

	}
	((CStatic*)GetDlgItem(IDC_STATIC_MY1))->SetWindowText(_T("asdfasdfas"));
	
}


void CTestDLGDlg::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(1);
//	UpdateData();

	double d = m_dBodyHeight; 

	CString strName;

//	m_comboxNames.GetWindowTextW(strName);

	int nIndex = m_comboxNames.GetCurSel();
	m_comboxNames.GetLBText(nIndex,strName);

	CDialogEx::OnOK();
}

