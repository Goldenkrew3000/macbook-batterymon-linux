#include "cMain.h"
#include "getBatteryInfo.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
	EVT_BUTTON(10001, cMain::bFillPowerInfo)
	EVT_BUTTON(10002, cMain::bEmptyPowerInfo)
	EVT_BUTTON(10003, cMain::bGetPowerSupplyName)
wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Macbook Battery Monitor Linux - Malexty 2021", wxPoint(30, 30), wxSize(800, 600)) // 250 working
{
	m_btn1 = new wxButton(this, 10001, "Fill Power Info", wxPoint(10, 10), wxSize(150, 50));
	m_btn2 = new wxButton(this, 10002, "Empty Power Info", wxPoint(10, 70), wxSize(150, 50));
	m_btn3 = new wxButton(this, 10003, "Get Power Supply Name Info", wxPoint(10, 140), wxSize(150, 50));
}

cMain::~cMain()
{
}

void cMain::bFillPowerInfo(wxCommandEvent &evt)
{
	printf("Fill Power Info Button pressed.\n");
	fillPowerInfo();
}

void cMain::bEmptyPowerInfo(wxCommandEvent &evt)
{
	printf("Empty Power Info Button pressed.\n");
	clearPowerInfo();
}

void cMain::bGetPowerSupplyName(wxCommandEvent &evt)
{
	printf("Get Power Supply Name Button pressed.\n");
	printf("Power Supply Capacity: %s\n", getPowerSupplyCapacity());
	printf("Power Supply Charge Full: %s\n", getPowerSupplyChargeFull());
	printf("Power Supply Charge Full Design: %s\n", getPowerSupplyChargeFullDesign());
	printf("Power Supply Charge Now: %s\n", getPowerSupplyChargeNow());
	printf("Power Supply Current Avg: %s\n", getPowerSupplyCurrentAvg());
	printf("Power Supply Current Now: %s\n", getPowerSupplyCurrentNow());
	printf("Power Supply Cycle Count: %s\n", getPowerSupplyCycleCount());
	printf("Power Supply Manufacturer: %s\n", getPowerSupplyManufacturer());
	printf("Power Supply Model Name: %s\n", getPowerSupplyModelName());
	printf("Power Supply Present: %s\n", getPowerSupplyPresent());
	printf("Power Supply Status: %s\n", getPowerSupplyStatus());
	printf("Power Supply Technology: %s\n", getPowerSupplyTechnology());
	printf("Power Supply Temp: %s\n", getPowerSupplyTemp());
	printf("Power Supply Type: %s\n", getPowerSupplyType());
	printf("Power Supply Voltage Min Design: %s\n", getPowerSupplyVoltageMinDesign());
	printf("Power Supply Voltage Now: %s\n", getPowerSupplyVoltageNow());
	printf("Power Adapter Online: %s\n", getPowerAdapterOnline());
}
