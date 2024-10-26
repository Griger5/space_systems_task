#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#include "input_parsing.h"
#include "interface.h"

void command_help(void) {
    printf("help\n");
}

int main(void) {
    bool is_running = true;

    char command_buffer[32];
    char *token;
    parameter_t param;
    double value;

    while (is_running) {
        fgets(command_buffer, 32, stdin);

        token = strtok(command_buffer, " \n");
        
        switch (check_first_token(token)) {
            case EXIT:
                is_running = false;
                break;

            case HELP:
                command_help();
                break;

            case SET:
                token = strtok(NULL, " ");
                param = check_param_token(token);

                token = strtok(NULL, " ");
                
                // add error if not
                if (is_valid_double(token)) {
                    value = strtod(token, NULL);
                }

                set_parameter(param, value);

                break;

            case GET:
                token = strtok(NULL, " \n");
                param = check_param_token(token);

                get_parameter(param);

                break;
        }
    }
    
    return 0;
}