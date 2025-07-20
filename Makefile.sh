CC = gcc
CFLAGS = -Wall

myshell: src/main.c src/parser.c src/executor.c src/builtins.c
	$(CC) $(CFLAGS) -o myshell src/main.c src/parser.c src/executor.c src/builtins.c

clean:
	rm -f myshell
