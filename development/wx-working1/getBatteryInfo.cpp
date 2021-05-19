#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

// BAT0 /sys paths
char *power_supply_capacity_path = "/sys/class/power_supply/BAT0/capacity";
char *power_supply_charge_full_path = "/sys/class/power_supply/BAT0/charge_full";
char *power_supply_charge_full_design_path = "/sys/class/power_supply/BAT0/charge_full_design";
char *power_supply_charge_now_path = "/sys/class/power_supply/BAT0/charge_now";
char *power_supply_current_avg_path = "/sys/class/power_supply/BAT0/current_avg";
char *power_supply_current_now_path = "/sys/class/power_supply/BAT0/current_now";
char *power_supply_cycle_count_path = "/sys/class/power_supply/BAT0/cycle_count";
char *power_supply_manufacturer_path = "/sys/class/power_supply/BAT0/manufacturer";
char *power_supply_model_name_path = "/sys/class/power_supply/BAT0/model_name";
char *power_supply_present_path = "/sys/class/power_supply/BAT0/present";
char *power_supply_status_path = "/sys/class/power_supply/BAT0/status";
char *power_supply_technology_path = "/sys/class/power_supply/BAT0/technology";
char *power_supply_temp_path = "/sys/class/power_supply/BAT0/temp";
char *power_supply_type_path = "/sys/class/power_supply/BAT0/type";
char *power_supply_voltage_min_design_path = "/sys/class/power_supply/BAT0/voltage_min_design";
char *power_supply_voltage_now_path = "/sys/class/power_supply/BAT0/voltage_now";

// ADP1 /sys paths
char *power_adapter_online_path = "/sys/class/power_supply/ADP1/online";

// Variables for when the data is pulled from /sys
char power_supply_capacity[255];
char power_supply_charge_full[255];
char power_supply_charge_full_design[255];
char power_supply_charge_now[255];
char power_supply_current_avg[255];
char power_supply_current_now[255];
char power_supply_cycle_count[255];
char power_supply_manufacturer[255];
char power_supply_model_name[255];
char power_supply_present[255];
char power_supply_status[255];
char power_supply_technology[255];
char power_supply_temp[255];
char power_supply_type[255];
char power_supply_voltage_min_design[255];
char power_supply_voltage_now[255];
char power_adapter_online[255];

void fillPowerInfo()
{
    FILE *fileobj;

    // power_supply_capacity
    if (fileobj = fopen(power_supply_capacity_path, "r"))
    {
        fscanf(fileobj, "%s", power_supply_capacity);
        fclose(fileobj);
    } else
    {
        strcpy(power_supply_capacity, "NA");
    }

    // power_supply_charge_full
    if (fileobj = fopen(power_supply_charge_full_path, "r"))
    {
        fscanf(fileobj, "%s", power_supply_charge_full);
        fclose(fileobj);
    } else
    {
        strcpy(power_supply_charge_full, "NA");
    }

    // power_supply_charge_full_design
    if (fileobj = fopen(power_supply_charge_full_design_path, "r"))
    {
        fscanf(fileobj, "%s", power_supply_charge_full_design);
        fclose(fileobj);
    } else
    {
        strcpy(power_supply_charge_full_design, "NA");
    }

    // power_supply_charge_now
    if (fileobj = fopen(power_supply_charge_now_path, "r"))
    {
        fscanf(fileobj, "%s", power_supply_charge_now);
        fclose(fileobj);
    } else
    {
        strcpy(power_supply_charge_now, "NA");
    }

    // power_supply_current_avg
    if (fileobj = fopen(power_supply_current_avg_path, "r"))
    {
        fscanf(fileobj, "%s", power_supply_current_avg);
        fclose(fileobj);
    } else
    {
        strcpy(power_supply_current_avg, "NA");
    }

    // power_supply_current_now
    if (fileobj = fopen(power_supply_current_now_path, "r"))
    {
        fscanf(fileobj, "%s", power_supply_current_now);
        fclose(fileobj);
    } else
    {
        strcpy(power_supply_current_now, "NA");
    }

    // power_supply_cycle_count
    if (fileobj = fopen(power_supply_cycle_count_path, "r"))
    {
        fscanf(fileobj, "%s", power_supply_cycle_count);
        fclose(fileobj);
    } else
    {
        strcpy(power_supply_cycle_count, "NA");
    }

    // power_supply_manufacturer
    if (fileobj = fopen(power_supply_manufacturer_path, "r"))
    {
        fscanf(fileobj, "%s", power_supply_manufacturer);
        fclose(fileobj);
    } else
    {
        strcpy(power_supply_manufacturer, "NA");
    }

    // power_supply_model_name
    if (fileobj = fopen(power_supply_model_name_path, "r"))
    {
        fscanf(fileobj, "%s", power_supply_model_name);
        fclose(fileobj);
    } else
    {
        strcpy(power_supply_model_name, "NA");
    }

    // power_supply_present
    if (fileobj = fopen(power_supply_present_path, "r"))
    {
        fscanf(fileobj, "%s", power_supply_present);
        fclose(fileobj);
    } else
    {
        strcpy(power_supply_present, "NA");
    }

    // power_supply_status
    if (fileobj = fopen(power_supply_status_path, "r"))
    {
        fscanf(fileobj, "%s", power_supply_status);
        fclose(fileobj);
    } else
    {
        strcpy(power_supply_status, "NA");
    }

    // power_supply_technology
    if (fileobj = fopen(power_supply_technology_path, "r"))
    {
        fscanf(fileobj, "%s", power_supply_technology);
        fclose(fileobj);
    } else
    {
        strcpy(power_supply_technology, "NA");
    }

    // power_supply_temp
    if (fileobj = fopen(power_supply_temp_path, "r"))
    {
        fscanf(fileobj, "%s", power_supply_temp);
        fclose(fileobj);
    } else
    {
        strcpy(power_supply_temp, "NA");
    }

    // power_supply_type
    if (fileobj = fopen(power_supply_type_path, "r"))
    {
        fscanf(fileobj, "%s", power_supply_type);
        fclose(fileobj);
    } else
    {
        strcpy(power_supply_type, "NA");
    }

    // power_supply_voltage_min_design
    if (fileobj = fopen(power_supply_voltage_min_design_path, "r"))
    {
        fscanf(fileobj, "%s", power_supply_voltage_min_design);
        fclose(fileobj);
    } else
    {
        strcpy(power_supply_voltage_min_design, "NA");
    }

    // power_supply_voltage_now
    if (fileobj = fopen(power_supply_voltage_now_path, "r"))
    {
        fscanf(fileobj, "%s", power_supply_voltage_now);
        fclose(fileobj);
    } else
    {
        strcpy(power_supply_voltage_now, "NA");
    }

    // power_adapter_online
    if (fileobj = fopen(power_adapter_online_path, "r"))
    {
        fscanf(fileobj, "%s", power_adapter_online);
        fclose(fileobj);
    } else
    {
        strcpy(power_adapter_online, "NA");
    }
}

void clearPowerInfo()
{
    printf("Clearing Power Info...\n");
    memset(power_supply_capacity, 0, strlen(power_supply_capacity));
    memset(power_supply_charge_full, 0, strlen(power_supply_charge_full));
    memset(power_supply_charge_full_design, 0, strlen(power_supply_charge_full_design));
    memset(power_supply_charge_now, 0, strlen(power_supply_charge_now));
    memset(power_supply_current_avg, 0, strlen(power_supply_current_avg));
    memset(power_supply_current_now, 0, strlen(power_supply_current_now));
    memset(power_supply_cycle_count, 0, strlen(power_supply_cycle_count));
    memset(power_supply_manufacturer, 0, strlen(power_supply_manufacturer));
    memset(power_supply_model_name, 0, strlen(power_supply_model_name));
    memset(power_supply_present, 0, strlen(power_supply_present));
    memset(power_supply_status, 0, strlen(power_supply_status));
    memset(power_supply_technology, 0, strlen(power_supply_technology));
    memset(power_supply_temp, 0, strlen(power_supply_temp));
    memset(power_supply_type, 0, strlen(power_supply_type));
    memset(power_supply_voltage_min_design, 0, strlen(power_supply_voltage_min_design));
    memset(power_supply_voltage_now, 0, strlen(power_supply_voltage_now));
    memset(power_adapter_online, 0, strlen(power_adapter_online));
    printf("Cleared Power Info.\n");
}

char* getPowerSupplyCapacity()
{
    return power_supply_capacity;
}

char* getPowerSupplyChargeFull()
{
    return power_supply_charge_full;
}

char* getPowerSupplyChargeFullDesign()
{
    return power_supply_charge_full_design;
}

char* getPowerSupplyChargeNow()
{
    return power_supply_charge_now;
}

char* getPowerSupplyCurrentAvg()
{
    return power_supply_current_avg;
}

char* getPowerSupplyCurrentNow()
{
    return power_supply_current_now;
}

char* getPowerSupplyCycleCount()
{
    return power_supply_cycle_count;
}

char* getPowerSupplyManufacturer()
{
    return power_supply_manufacturer;
}

char* getPowerSupplyModelName()
{
    return power_supply_model_name;
}

char* getPowerSupplyPresent()
{
    return power_supply_present;
}

char* getPowerSupplyStatus()
{
    return power_supply_status;
}

char* getPowerSupplyTechnology()
{
    return power_supply_technology;
}

char* getPowerSupplyTemp()
{
    return power_supply_temp;
}

char* getPowerSupplyType()
{
    return power_supply_type;
}

char* getPowerSupplyVoltageMinDesign()
{
    return power_supply_voltage_min_design;
}

char* getPowerSupplyVoltageNow()
{
    return power_supply_voltage_now;
}

char* getPowerAdapterOnline()
{
    return power_adapter_online;
}
