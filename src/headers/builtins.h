#ifndef BUILTINS_H
#define BUILTINS_H

#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int is_builtin(char** args);
void run_builtin(char** args);

#endif // BUILTINS_H 