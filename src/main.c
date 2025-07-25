#include "headers/parser.h"
#include "headers/executor.h"
#include "headers/builtins.h"
#include <stdio.h>

int main() {
    char input[1024];
    char* args[64];

    while (1) {
        printf("myshell> ");
        fgets(input, sizeof(input), stdin);
        if (parse_input(input, args)) {
            if (is_builtin(args)) run_builtin(args);
            else execute_command(args);
        }
    }
    return 0;
}
