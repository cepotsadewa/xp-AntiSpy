#if !defined(AFX_ABOUT_H__70AD019D_910B_4E6E_874C_091E65DE9678__INCLUDED_)
#define AFX_ABOUT_H__70AD019D_910B_4E6E_874C_091E65DE9678__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// About.h : Header-Datei

#include "MyHyperLink.h"
//
/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CAbout 

class CAbout : public CDialog
{
// Konstruktion
public:
	CAbout(CWnd* pParent = NULL);   // Standardkonstruktor

// Dialogfelddaten
	//{{AFX_DATA(CAbout)
	enum { IDD = IDD_ABOUT_DIALOG };
	CStatic	m_AboutTxt;
	CMyHyperLink m_lblTranslator;
	//}}AFX_DATA


// �berschreibungen
	// Vom Klassen-Assistenten generierte virtuelle Funktions�berschreibungen
	//{{AFX_VIRTUAL(CAbout)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterst�tzung
	//}}AFX_VIRTUAL
protected:

	// Generierte Nachrichtenzuordnungsfunktionen
	//{{AFX_MSG(CAbout)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	CString m_aboutString;

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ f�gt unmittelbar vor der vorhergehenden Zeile zus�tzliche Deklarationen ein.

#endif // AFX_ABOUT_H__70AD019D_910B_4E6E_874C_091E65DE9678__INCLUDED_
