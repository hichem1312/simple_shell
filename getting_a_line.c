#include "main.h"
/**
 *getting_a_line - get a line
 *Return: string
 */
char *getting_a_line()
{
	size_t bufsize, size, cmp = -1;
	char *buffer;

	write(STDOUT_FILENO, "$ ", 2);
	size = getline(&buffer, &bufsize, stdin);
	if (size == cmp)
	{
		exit(0);
	}
	return (buffer);
}
