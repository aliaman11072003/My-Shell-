#include <string.h>
#include "headers/parser.h"

int parse_input(char* input, char** args) {
    // remove newline
    input[strcspn(input, "\n")] = 0;
    int i = 0;
    args[i] = strtok(input, " ");
    while (args[i] != NULL)
        args[++i] = strtok(NULL, " ");
    return i > 0;
}
