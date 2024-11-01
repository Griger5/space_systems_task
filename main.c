#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#include "input_parsing.h"
#include "interface.h"

int main(void) {
    bool is_running = true;

    char command_buffer[32];
    char *token;
    parameter_t param;
    double value;

    while (is_running) {
        fgets(command_buffer, sizeof(command_buffer), stdin);

        token = strtok(command_buffer, " \n");
        
        switch (check_first_token(token)) {
            case EXIT:
                is_running = false;
                break;

            case HELP:
                help();
                break;

            case SET:
                token = strtok(NULL, " \n");
                if (is_empty(token, "parameter")) break;

                param = check_param_token(token);
                if (is_unknown_param(param)) break;

                token = strtok(NULL, " \n");
                if (is_empty(token, "value")) break;
                
                if (is_valid_double(token)) {
                    value = strtod(token, NULL);

                    set_parameter(param, value);
                }
                else {
                    printf("Given value is not a valid number.\n");
                    break;
                }

                break;

            case GET:
                token = strtok(NULL, " \n");
                if (is_empty(token, "parameter")) break;

                param = check_param_token(token);
                if (is_unknown_param(param)) break;

                get_parameter(param);

                break;

            case EMPTY_CMD:
                printf("No command entered.\n");
                break;

            case UNKNOWN_CMD:
                printf("Unrecognized command. Maybe try the \'HELP\' command?\n");
                break;
        }
    }
    
    return 0;
}