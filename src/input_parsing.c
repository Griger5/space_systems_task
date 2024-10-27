#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>

#include "input_parsing.h"
#include "interface.h"

command_t check_first_token(char *token) {
    if (token == NULL) return EMPTY_CMD;
    
    if (strcmp(token, "EXIT") == 0) {
        return EXIT;
    }
    else if (strcmp(token, "HELP") == 0) {
        return HELP;
    }
    else if (strcmp(token, "SET") == 0) {
        return SET;
    }
    else if (strcmp(token, "GET") == 0) {
        return GET;
    }
    else return UNKNOWN_CMD;
}

command_t check_param_token(char *token) {    
    if (strcmp(token, "TEMP") == 0) {
        return TEMP;
    }
    else if (strcmp(token, "PRESSURE") == 0) {
        return PRESSURE;
    }
    else if (strcmp(token, "ALTITUDE") == 0) {
        return ALTITUDE;
    }
    else return UNKNOWN_PARAM;
}

bool is_valid_double(char *string) {
    char *s = string;

    while (*s != '\0') {
        if (isdigit(*s) || *s == '.') {
            s++;
        }
        else return false;
    }

    return true;
}