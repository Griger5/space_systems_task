#ifndef INTERFACE_H
#define INTERFACE_H

typedef enum parameter_t {
    TEMP = 0,
    PRESSURE = 1,
    ALTITUDE = 2
} parameter_t;

void set_temp(double new_temp);
double get_temp(void);

void set_pressure(double new_pressure);
double get_pressure(void);

void set_altitude(double new_altitude);
double get_altitude(void);

void set_parameter(parameter_t param, double new_value);

void get_parameter(parameter_t param);

void help(void);

#endif