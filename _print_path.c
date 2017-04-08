#include "test_shell.h"
/**
 * main - list the directories contained in PATH
 *
 * Return: 0
 */
int main(void)
{
	char *to_print;
	char *dir;

	to_print = _getenv("PATH");
	dir = strtok(to_print, ":");

	while (to_print != NULL)
	{
		if (dir == NULL)
			break;
		printf ("%s\n", dir);
		dir = strtok(NULL, ":");
	}
	return (0);
}
