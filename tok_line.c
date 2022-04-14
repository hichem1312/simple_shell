#include "main.h"
/**
 * split_line - split the line
 * @line : string
 * Return : char
 */
char **split_line(char *line)
{
	char **commande = malloc(sizeof(char) * 10);
	char *string;
	int i = 0;

string = strtok(line, " ");
while (string)
{
	commande[i] = string;
	string = strtok(NULL, " ");
	i++;
}
commande[i + 1] = NULL;
return (commande);
}
