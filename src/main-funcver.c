#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

char power_supply_name[255];
char power_supply_status[255];
char power_supply_present[255];
char power_supply_voltage_min_design[255];
char power_supply_technology[255];
char power_supply_current_now[255];
char power_supply_voltage_now[255];
char power_supply_cycle_count[255];
char power_supply_current_avg[255];
char power_supply_capacity[255];
char power_supply_manufacturer[255];
char power_supply_model_name[255];
char power_supply_temp[255];
char power_supply_charge_full_design[255];
char power_supply_charge_full[255];
char power_supply_charge_now[255];

void readUEventFile()
{
    FILE *fp;
    fp = fopen("/sys/class/power_supply/BAT0/uevent", "r");

    fscanf(fp, "%s", power_supply_name);
    while (power_supply_name[0] != 61)
    {
        memmove(power_supply_name, power_supply_name + 1, strlen(power_supply_name)); // 18
    }
    memmove(power_supply_name, power_supply_name + 1, strlen(power_supply_name));
    printf("power_supply_name: %s\n", power_supply_name);

    fscanf(fp, "%s", power_supply_status);
    while (power_supply_status[0] != 61)
    {
        memmove(power_supply_status, power_supply_status + 1, strlen(power_supply_status));
    }
    memmove(power_supply_status, power_supply_status + 1, strlen(power_supply_status));
    printf("power_supply_status: %s\n", power_supply_status);

    fscanf(fp, "%s", power_supply_present);
    while (power_supply_present[0] != 61)
    {
        memmove(power_supply_present, power_supply_present + 1, strlen(power_supply_present));
    }
    memmove(power_supply_present, power_supply_present + 1, strlen(power_supply_present));
    printf("power_supply_present: %s\n", power_supply_present);

    fscanf(fp, "%s", power_supply_technology);
    while (power_supply_technology[0] != 61)
    {
        memmove(power_supply_technology, power_supply_technology + 1, strlen(power_supply_technology));
    }
    memmove(power_supply_technology, power_supply_technology + 1, strlen(power_supply_technology));
    printf("power_supply_technology: %s\n", power_supply_technology);

    fscanf(fp, "%s", power_supply_cycle_count);
    while (power_supply_cycle_count[0] != 61)
    {
        memmove(power_supply_cycle_count, power_supply_cycle_count + 1, strlen(power_supply_cycle_count));
    }
    memmove(power_supply_cycle_count, power_supply_cycle_count + 1, strlen(power_supply_cycle_count));
    printf("power_supply_cycle_count: %s\n", power_supply_cycle_count);

    fscanf(fp, "%s", power_supply_voltage_min_design);
    while (power_supply_voltage_min_design[0] != 61)
    {
        memmove(power_supply_voltage_min_design, power_supply_voltage_min_design + 1, strlen(power_supply_voltage_min_design));
    }
    memmove(power_supply_voltage_min_design, power_supply_voltage_min_design + 1, strlen(power_supply_voltage_min_design));
    printf("power_supply_voltage_min_design: %s\n", power_supply_voltage_min_design);

    fscanf(fp, "%s", power_supply_voltage_now);
    while (power_supply_voltage_now[0] != 61)
    {
        memmove(power_supply_voltage_now, power_supply_voltage_now + 1, strlen(power_supply_voltage_now));
    }
    memmove(power_supply_voltage_now, power_supply_voltage_now + 1, strlen(power_supply_voltage_now));
    printf("power_supply_voltage_now: %s\n", power_supply_voltage_now);

    fscanf(fp, "%s", power_supply_current_now);
    while (power_supply_current_now[0] != 61)
    {
        memmove(power_supply_current_now, power_supply_current_now + 1, strlen(power_supply_current_now));
    }
    memmove(power_supply_current_now, power_supply_current_now + 1, strlen(power_supply_current_now));
    printf("power_supply_current_now: %s\n", power_supply_current_now);

    fscanf(fp, "%s", power_supply_current_avg);
    while (power_supply_current_avg[0] != 61)
    {
        memmove(power_supply_current_avg, power_supply_current_avg + 1, strlen(power_supply_current_avg));
    }
    memmove(power_supply_current_avg, power_supply_current_avg + 1, strlen(power_supply_current_avg));
    printf("power_supply_current_avg: %s\n", power_supply_current_avg);

    fscanf(fp, "%s", power_supply_capacity);
    while (power_supply_capacity[0] != 61)
    {
        memmove(power_supply_capacity, power_supply_capacity + 1, strlen(power_supply_capacity));
    }
    memmove(power_supply_capacity, power_supply_capacity + 1, strlen(power_supply_capacity));
    printf("power_supply_capacity: %s\n", power_supply_capacity);

    fscanf(fp, "%s", power_supply_charge_full_design);
    while (power_supply_charge_full_design[0] != 61)
    {
        memmove(power_supply_charge_full_design, power_supply_charge_full_design + 1, strlen(power_supply_charge_full_design));
    }
    memmove(power_supply_charge_full_design, power_supply_charge_full_design + 1, strlen(power_supply_charge_full_design));
    printf("power_supply_charge_full_design: %s\n", power_supply_charge_full_design);

    fscanf(fp, "%s", power_supply_charge_full);
    while (power_supply_charge_full[0] != 61)
    {
        memmove(power_supply_charge_full, power_supply_charge_full + 1, strlen(power_supply_charge_full));
    }
    memmove(power_supply_charge_full, power_supply_charge_full + 1, strlen(power_supply_charge_full));
    printf("power_supply_charge_full: %s\n", power_supply_charge_full);

    fscanf(fp, "%s", power_supply_charge_now);
    while (power_supply_charge_now[0] != 61)
    {
        memmove(power_supply_charge_now, power_supply_charge_now + 1, strlen(power_supply_charge_now));
    }
    memmove(power_supply_charge_now, power_supply_charge_now + 1, strlen(power_supply_charge_now));
    printf("power_supply_charge_now: %s\n", power_supply_charge_now);

    fscanf(fp, "%s", power_supply_temp);
    while (power_supply_temp[0] != 61)
    {
        memmove(power_supply_temp, power_supply_temp + 1, strlen(power_supply_temp));
    }
    memmove(power_supply_temp, power_supply_temp + 1, strlen(power_supply_temp));
    printf("power_supply_temp: %s\n", power_supply_temp);

    fscanf(fp, "%s", power_supply_model_name);
    while (power_supply_model_name[0] != 61)
    {
        memmove(power_supply_model_name, power_supply_model_name + 1, strlen(power_supply_model_name));
    }
    memmove(power_supply_model_name, power_supply_model_name + 1, strlen(power_supply_model_name));
    printf("power_supply_model_name: %s\n", power_supply_model_name);

    fscanf(fp, "%s", power_supply_manufacturer);
    while (power_supply_manufacturer[0] != 61)
    {
        memmove(power_supply_manufacturer, power_supply_manufacturer + 1, strlen(power_supply_manufacturer));
    }
    memmove(power_supply_manufacturer, power_supply_manufacturer + 1, strlen(power_supply_manufacturer));
    printf("power_supply_manufacturer: %s\n", power_supply_manufacturer);

    fclose(fp);
}

int main()
{
    printf("Macbook Battery Monitor for Linux\n");
    while (1)
    {
        readUEventFile();
        printf("\n");
        sleep(1);
    }
    return 0;
}
