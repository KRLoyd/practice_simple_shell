#include "test_shell.h"

/**
 * main - prompt user for command and print it on the next line
 * @ac: number of items in av
 * @av: NULL terminated array of strings
 *
 * Return: 0 (SUCCESS), -1 (FAILURE)
 */
int main(void)
{
	char *buffer;
	size_t size;


	printf("$ ");

	if (getline(&buffer, &size, stdin) == -1)
		return (-1);
	printf("%s", buffer);
	return (0);
}
