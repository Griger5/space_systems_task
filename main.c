#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include "interface.h"

typedef enum command_t {
    EXIT = 0,
    HELP = 1,
    SET = 2,
    GET = 3
} command_t;

void command_help(void) {
    printf("help\n");
}

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

int main(void) {
    bool is_running = true;

    char command_buffer[32];
    char *token;

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
                set_temp(10);
                break;
            case GET:
                printf("temp: %f\n", get_temp());
                break;
        }
    }
    
    return 0;
}