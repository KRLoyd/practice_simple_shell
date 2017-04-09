#include "test_shell.h"

/**
 * main - check files
 *
 * Return: 0
 */
int main(void)
{

/* test _getenv.c */
	char *name;
	char *found_variable;

	name = "PATH";
	found_variable = _getenv(name);
	printf("%s\n", found_variable);

/* test _strnlen_rec.c */
/**	char *name;
	unsigned int len;

	name = "Sam";
	len = _strlen_rec(name);
	printf("len: %d\n", len); **/
	return (0);
}
