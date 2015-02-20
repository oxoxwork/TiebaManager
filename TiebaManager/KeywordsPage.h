#pragma once
#include "ListPage.h"


// CKeywordsPage �Ի���

class CKeywordsPage : public CListPage
{
	DECLARE_DYNAMIC(CKeywordsPage)

public:
	CKeywordsPage(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CKeywordsPage();

// �Ի�������
	enum { IDD = IDD_LIST_PAGE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();

protected:
	virtual BOOL CheckMatchTooMuch(const CString& text, BOOL isRegex);
	virtual void PostChangeList();
	virtual BOOL TestMatch(const CString& test, const CString& text, BOOL isRegex);
};