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

void help(void) {
    printf("SYNTAX:\n");
    printf("\t COMMAND [PARAM] [VALUE]\n\n");
    printf("COMMAND: EXIT \n \t Exits the program.\n");
    printf("COMMAND: HELP \n \t Lists all available commands.\n");
    printf("COMMAND: SET _param_ _value_ \n \t Sets inputed _param_ to the given _value_.\n");
    printf("\t _param_ has to be equal to one of: TEMP, PRESSURE, ATLITUDE.\n");
    printf("\t _value_ has to be a valid number of type double, seperated by a period.\n");
    printf("COMMAND: GET _param_ \n \t Outputs the value of a given _param_.\n");
    printf("\t _param_ has to be equal to one of: TEMP, PRESSURE, ATLITUDE.\n");
}