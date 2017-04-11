#include "test_shell.h"
/**
 * main - stat example
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	unsigned int i;
	struct stat st;

	i = 1;
	while (av[i])
	{
		printf("%s:", av[i]);
		if (stat(av[i], &st) == 0)
		{
			printf(" FOUND\n");
		}
		else
		{
			printf(" NOT FOUND\n");
		}
		i++;
	}
	return (0);
}
