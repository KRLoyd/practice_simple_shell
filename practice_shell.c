#include "test_shell.h"
/**
 * _strlen_rec - find the length of a string
 * @s: string to evaluate
 *
 * Return: length of s
 */
int _strlen_rec(char *s)
{
	unsigned int i;

	if (*s == '\0')
		return (0);
	i = (_strlen_rec(s + 1));
	return (i + 1);
}
/**
 * main - super simple shell
 *
 * Return: 0 (SUCCESS), -1 (FAILURE)
 */

int main(void)
{
	char *buffer;
	char *token;
	char *av[1024];
	size_t size;
	int status, i, j;
	pid_t pid;

/* print my prompt */
	while (1)
	{
		printf(PROMPT);
/* get user input */
		if (getline(&buffer, &size, stdin) == -1)
			return (-1);
		printf("getline: %s", buffer);
/* tokenize input */
	token = strtok(buffer, " ");
/* set each token to an av element */
	for (i = 0; token != NULL; i++)
	{
		for (j = 0; j < _strlen_rec(token); j++)
			;
		if (token[j - 1] == '\n')
			token[j - 1] = '\0';
		av[i] = token;
		token = strtok(NULL, " ");
	}
	av[i] = NULL;

	printf("av[0]: %s\n", av[0]);
	printf("av[1]: %s\n", av[1]);
	printf("av[2]: %s\n", av[2]);
	pid = fork();
	if (pid == 0) /* child */
	{
		printf("child created\n");
		if (execve(av[0], av, NULL) == -1)
			perror("execve Error:\n");
		printf("execve should have executed\n");
	}
	else /* parent */
	{
		wait(&status);
		printf("Child terminated\n");
	}
	}
	return (0);
}
