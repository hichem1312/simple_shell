#include "main.h"
/**
 *print_environ - v
 *Return: environ
 */
int print_environ(void)
{
int i;
	for (i = 0; (environ[i]) != NULL; i++)
		{
			write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
			write(STDOUT_FILENO, "\n", 1);
		}
	return (0);
}
