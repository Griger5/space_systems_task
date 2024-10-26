#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>

#include "input_parsing.h"
#include "interface.h"

command_t check_first_token(char *token) {
    //update with error
    if (token == NULL) return 0;
    
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
    else return 0; //update with error
}

command_t check_param_token(char *token) {
    //update with error
    if (token == NULL) return 0;
    
    if (strcmp(token, "TEMP") == 0) {
        return TEMP;
    }
    else if (strcmp(token, "PRESSURE") == 0) {
        return PRESSURE;
    }
    else if (strcmp(token, "ALTITUDE") == 0) {
        return ALTITUDE;
    }
    else return 0; //update with error
}

bool is_valid_double(char *string) {
    char *end;
    strtod(string, &end);

    return string != end;
}