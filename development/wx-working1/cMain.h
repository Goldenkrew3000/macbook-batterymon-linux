#pragma once
#include "wx/wx.h"

class cMain : public wxFrame
{
public:
	cMain();
	~cMain();

public:
	wxButton *m_btn1 = nullptr;
	wxButton *m_btn2 = nullptr;
	wxButton *m_btn3 = nullptr;
	wxTextCtrl *m_txt1 = nullptr;
	wxListBox *m_list1 = nullptr;

	void bFillPowerInfo(wxCommandEvent &evt);
	void bEmptyPowerInfo(wxCommandEvent &evt);
	void bGetPowerSupplyName(wxCommandEvent &evt);

	wxDECLARE_EVENT_TABLE();
};
