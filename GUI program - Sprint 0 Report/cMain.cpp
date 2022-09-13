#include "cMain.h"
//this is about the window

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Simple	GUI", wxPoint(40,40), wxSize(800, 600))
{
	m_txt2 = new wxStaticText(this, wxID_ANY, " GUI programming  ", wxPoint(10, 70), wxSize(300, 30));
	m_txt1 = new wxTextCtrl(this, wxID_ANY, " ", wxPoint(10, 100), wxSize(300, 30));
	m_cbox1 = new wxCheckBox(this, wxID_ANY, "Click me", wxPoint(10, 500), wxSize(50, 50));
	m_radiobtn1 = new wxRadioButton(this, wxID_ANY, "Click me", wxPoint(400, 10), wxSize(150, 50));
	m_staticline1 = new wxStaticLine(this, wxID_ANY, wxPoint(500, 100), wxSize(500, 5), wxLI_HORIZONTAL);
}

cMain::~cMain()
{

}

