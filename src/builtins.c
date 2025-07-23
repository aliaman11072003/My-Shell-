#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "headers/builtins.h"

int is_builtin(char** args) {
    return (strcmp(args[0], "cd") == 0 || strcmp(args[0], "exit") == 0);
}

void run_builtin(char** args) {
    if (strcmp(args[0], "cd") == 0)
        chdir(args[1]);
    else if (strcmp(args[0], "exit") == 0)
        exit(0);
}
