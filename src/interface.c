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