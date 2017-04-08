#include "test_shell.h"

/**
 * main - tokenize a string and return a pointer to the array
 * @str: string to tokenize
 * @delim; delimiter to use for the tokens
 *
 * Return: 0 (SUCCESS), -1 (FIALURE)
 */
int main(void)
{
	char *newarray;
	char str[] = "Ello mate, let's go to the beach!";

	newarray = strtok(str, " ");
	while (newarray != NULL)
	{
		printf("%s\n", newarray);
		newarray = strtok(NULL, " ");
	}
	return (0);
}
