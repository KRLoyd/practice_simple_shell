#include "test_shell.h"

/**
 * main - print arguments passed to the function
 * @ac: number of items in av
 * @av: NULL terminated array of strings
 *
 * Return: Always 0
 */
int main(__attribute__((unused)) int ac, char **av)
{
	int i;

	for (i = 0; av[i] != '\0'; i++)
		printf("%s\n", av[i]);

	return (0);
}
