#pragma once
#include "afxwin.h"
#include "NormalListPage.h"


// CLoopBanPage 对话框

class CLoopBanPage : public CNormalListPage
{
	DECLARE_DYNAMIC(CLoopBanPage)

public:
	CLoopBanPage(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CLoopBanPage();

// 对话框数据
	enum { IDD = IDD_LOOP_BAN_PAGE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	afx_msg virtual void OnClickedButton1();
	afx_msg virtual void OnClickedButton3();


public:
	CButton m_enableCheck;
	CButton m_logCheck;
};

UINT AFX_CDECL LoopBanThread(LPVOID _dlg);
