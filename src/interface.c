#include <stdio.h>

#include "interface.h"

static double temp = 0;
static double pressure = 0;
static double altitude = 0;

void set_temp(double new_temp) {
    temp = new_temp;
}

double get_temp(void) {
    return temp;
}

void set_pressure(double new_pressure) {
    pressure = new_pressure;
}

double get_pressure(void) {
    return pressure;
}

void set_altitude(double new_altitude) {
    altitude = new_altitude;
}

double get_altitude(void) {
    return altitude;
}

void set_parameter(parameter_t param, double new_value) {
    switch (param) {
        case TEMP:
            set_temp(new_value);
            break;
        case PRESSURE:
            set_pressure(new_value);
            break;
        case ALTITUDE:
            set_altitude(new_value);
            break;
    }
}

void get_parameter(parameter_t param) {
    switch (param) {
        case TEMP:
            printf("%f\n", get_temp());
            break;
        case PRESSURE:
            printf("%f\n", get_pressure());
            break;
        case ALTITUDE:
            printf("%f\n", get_altitude());
            break;
    }
}