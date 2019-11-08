﻿
// FileTranslaterClientDlg.h: 头文件
//

#pragma once


// CFileTranslaterClientDlg 对话框
class CFileTranslaterClientDlg : public CDialogEx
{
// 构造
public:
	CFileTranslaterClientDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FILETRANSLATERCLIENT_DIALOG };
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
	// 服务器IP地址
//	CIPAddressCtrl serverIP;
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedButton1();
	// 存放信息
	CListBox messageList;
	CIPAddressCtrl severIP;
	// 上传文件的名字
	CEdit UpLoadName;
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	SOCKET client_socket = NULL;
	CString upload_file_location = NULL;
	CEdit download_path;
	CString download_file_location = NULL;
	CString store_file_location = NULL;
	afx_msg void OnBnClickedButton5();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedButton4();
};
