#include "test_shell.h"

/**
 * main - check files
 *
 * Return: 0
 */

int main(void)
{
	list_t *linked_dirs;
	char *which_result;

	linked_dirs = _link_path();
	if (linked_dirs == NULL)
		printf("could not create linked list\n");
	else
	{
		which_result = _which("hello", linked_dirs);
		if (which_result == NULL)
			printf("Error\n");
		else
			printf("which_result: %s\n", which_result);
	}
	return (0);
}
