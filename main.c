#include "main.h"
/**
 * main - sinmple shel
 * Return: 0
 */
int main(void)
{
char *buffer = malloc(sizeof(char));
char **path;
struct stat st;

if (buffer == NULL)
{
	perror("allocation failed");
	free(buffer);
	exit(0);
}
while (1)
{
	buffer = getting_a_line();
	path = split_line(buffer);
	if (stat(path[0], &st) == 0)
	{
		execute(path);
	}
}
free(buffer);
return (0);
}
