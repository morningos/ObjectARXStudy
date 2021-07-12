﻿
// MainMFCDlg.h: 头文件
//

#pragma once

#pragma warning(disable:6031)


// CMainMFCDlg 对话框
class CMainMFCDlg : public CDialogEx
{
	// 构造
public:
	CMainMFCDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MAINMFC_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void InitData(CString fileName = L"D:\\mydata\\default.ini");
	afx_msg void OnSave();
	CBrush m_brush;
	CFont m_font;
	CMenu menu;

	CStatic INFO_TEXT;
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnMenuShowAbout();

	double R1 = 0.0;
	double R2 = 0.0;
	double R3 = 0.0;
	double R4 = 0.0;
	double R5 = 0.0;
	double H1 = 0.0;
	double H2 = 0.0;
	double H_2 = 0.0;
	double RADIUS1 = 0.0;
	double RADIUS_1 = 0.0;
	double RADIUS2 = 0.0;
	double RADIUS3 = 0.0;
	double RADIUS4 = 0.0;
	double RADIUS5 = 0.0;

};
