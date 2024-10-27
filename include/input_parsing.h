#ifndef INPUT_PARSING_H
#define INPUT_PARSING_H

#include "interface.h"

typedef enum command_t {
    EXIT = 0,
    HELP = 1,
    SET = 2,
    GET = 3,
    EMPTY_CMD = -1,
    UNKNOWN_CMD = -2
} command_t;

/** @brief Inspects the first token 
*
* Checks if the first part of the command is a valid option.
*
* @param[in] token first command token to be checked
* @return Correct command's code or EMPTY_CMD/UNKNOWN_CMD code 
*/
command_t check_first_token(char *token);

/** @brief Inspects the parameter token
*
* Checks if the given parameter is a valid option.
*
* @param[in] token second command token to be checked
* @return Correct parameter's code or UNKNOWN_PARAM code 
*/
parameter_t check_param_token(char *token);

/** @brief Checks if the string can be safely converted to a double
*
* @param[in] string string to be checked
* @return bool 
*/
bool is_valid_double(char *string);

/** @brief Checks if the token is empty
*
* Checks if the given token is empty, and 
* displays an error message if it is. 
*
* @param[in] token token to be checked
* @param[in] message name of the token
* @return bool 
*/
bool is_empty(char *token, char *message);

/** @brief Checks if the parameter is known
*
* Checks if the given parameter is unknown, and 
* displays an error message if it is. 
*
* @param[in] param parameter to be checked
* @return bool 
*/
bool is_unknown_param(parameter_t param);

#endif