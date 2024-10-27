#ifndef INTERFACE_H
#define INTERFACE_H

typedef enum parameter_t {
    TEMP = 0,
    PRESSURE = 1,
    ALTITUDE = 2,
    UNKNOWN_PARAM = -1
} parameter_t;

/** @brief Sets temperature to a new value
*
* @param[in] new_temp new value of temperature
* @return void
*/
void set_temp(double new_temp);

/** @brief Gets the current value of temperature
*
* @return current value of temperature
*/
double get_temp(void);

/** @brief Sets pressure to a new value
*
* @param[in] new_pressure new value of pressure
* @return void
*/
void set_pressure(double new_pressure);

/** @brief Gets the current value of pressure
*
* @return current value of pressure
*/
double get_pressure(void);

/** @brief Sets altitude to a new value
*
* @param[in] new_altitude new value of altitude
* @return void
*/
void set_altitude(double new_altitude);

/** @brief Gets the current value of pressure
*
* @return current value of pressure
*/
double get_altitude(void);

/** @brief Sets a parameter to the new value
*
*
* @param[in] param parameter to update
* @param[in] new_value value to be set
* @return void
*/
void set_parameter(parameter_t param, double new_value);

/** @brief Gets the current value of a given parameter
*
* @param[in] param parameter to check
* @return Current value of the selected parameter
*/
void get_parameter(parameter_t param);

/** @brief Lists all available commands
*
* @return void
*/
void help(void);

#endif