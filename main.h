#ifndef header_h
#define header_h
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>
#include <sys/wait.h>
extern char **environ;
int main(void);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int execute(char **commande);
char *getting_a_line();
int print_environ(void);
char **split_line(char *line);

#endif
