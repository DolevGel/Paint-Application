// 

#pragma once

#include <vector>
#include <stack>
#include "MyShape.h"
#include "MyFactory.h"
#include "MyEllipseFactory.h"
#include "MyLineFactory.h"
#include "MyTriangleFactory.h"
#include "MyRectangleFactory.h"
#include "MySquareFactory.h"
#include "Command.h"

using namespace std;


class CMyPaintDlg : public CDialogEx
{

public:
	CMyPaintDlg(CWnd* pParent = NULL);	


	enum { IDD = IDD_MYPAINT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support



protected:
	HICON m_hIcon;

	
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

private:

	vector<MyShape*> shapes;
	
	stack<Command*> done, undone;
	bool isPressed;
	//colors
	COLORREF backGroundColor, borderColor;
	//one factory that can produce all the shapes from his "child's" factorie's
	MyFactory *factory;
	 
	bool ifSelected;
	MyShape* tempShape;
	CPoint beginMove, endMove;

public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnBnClickedRadio1();
	afx_msg void OnBnClickedRadio2();
	afx_msg void OnBnClickedRadio3();
	afx_msg void OnBnClickedRadio4();
	afx_msg void OnBnClickedRadio5();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton10();
};
