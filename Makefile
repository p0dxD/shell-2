CFLAGS = -Wall -Werror
DFLAGS = -g

all:
	gcc shell.c -o shell

shell:
	gcc shell.c -o shell

gdb:
	@echo "Entering GDB"
	gdb ./shell

leaks: shell
	@echo "Calling Valgrind to check for leaks"
	gcc shell.c -o shell && valgrind ./shell

clean:
	rm -f shell
