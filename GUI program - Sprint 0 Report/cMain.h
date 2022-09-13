#pragma once
#include "wx/wx.h"
#include <wx/statline.h>

class cMain : public wxFrame
{
public:
	cMain();
	~cMain();

//add components into window 
public:
	wxStaticText* m_txt2 = nullptr;
	wxStaticLine* m_staticline1;
	wxTextCtrl * m_txt1 = nullptr;
	wxCheckBox* m_cbox1 = nullptr;
	wxRadioButton* m_radiobtn1 = nullptr;
};

