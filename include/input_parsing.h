#ifndef INPUT_PARSING_H
#define INPUT_PARSING_H

typedef enum command_t {
    EXIT = 0,
    HELP = 1,
    SET = 2,
    GET = 3,
    EMPTY_CMD = -1,
    UNKNOWN_CMD = -2,
    UNKNOWN_PARAM = -3
} command_t;

command_t check_first_token(char *token);

command_t check_param_token(char *token);

bool is_valid_double(char *string);

#endif