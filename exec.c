#include "main.h"
/**
 * execute - execute the command
 *@commande: the command
 *Return: 0
 */
int execute(char **commande)
{
	pid_t id;

		id = fork();
	if (id == 0)
	{
		if (execve(commande[0], commande, NULL))
		{
			perror("./hsh");
			exit(0);
		}
	}
	else
		wait(NULL);
	return (0);
}
