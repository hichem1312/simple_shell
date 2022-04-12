#include "main.c"
/**
 * main - sinmple shel
 * Return: 0
 */
int main(void)
{
char *buffer, **path
struct stat st;
while (1)
{
	buffer = getting_a_line();
	path = split_line(buffer);
	if (stat(path[0], &st) != 0)
	{
		path[0] = find_path(path[0]);
		execute(path);
	}
}
return (0);
}
