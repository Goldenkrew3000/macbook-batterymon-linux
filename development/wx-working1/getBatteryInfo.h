#ifndef GETBATTERYINFO_H_INCLUDED
#define GETBATTERYINFO_H_INCLUDED

void fillPowerInfo();
void clearPowerInfo();
char* getPowerSupplyCapacity();
char* getPowerSupplyChargeFull();
char* getPowerSupplyChargeFullDesign();
char* getPowerSupplyChargeNow();
char* getPowerSupplyCurrentAvg();
char* getPowerSupplyCurrentNow();
char* getPowerSupplyCycleCount();
char* getPowerSupplyManufacturer();
char* getPowerSupplyModelName();
char* getPowerSupplyPresent();
char* getPowerSupplyStatus();
char* getPowerSupplyTechnology();
char* getPowerSupplyTemp();
char* getPowerSupplyType();
char* getPowerSupplyVoltageMinDesign();
char* getPowerSupplyVoltageNow();
char* getPowerAdapterOnline();

#endif
