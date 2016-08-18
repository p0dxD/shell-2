#ifndef shell_h
#define shell_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

//max sizes
#define MAX_STRING 250
#define MESSSAGE "sh-0.1: "
#define NEW_LINE_CMD "> "
char  *built_in_cmds[3] = {"exit","help","cd"};

//functions shell.c
int process_built_cmd(char *cmd);
void print_help(void);

#endif
