#include <stdio.h>
#include <unistd.h>
extern char **environ;
/**
 * main - prints the environment
 *
 * Return: Always 0
 */
int main(int ac, char **av, char **env)
{
	unsigned int i;

	i = 0;
	printf("env from main:\n");
	while (env[i] != NULL)
	{
		printf("%s\n", env[i]);
		i++;
	}

	printf("environ global variable:\n");
	while (*environ)
	{
		printf("%s\n", *environ);
		environ++;
	}
	return (0);
}
