#include "test_shell.h"
/**
 * main - looks for files in the current PATH
 *
 * Return: 0 (SUCCESS), -1 (FAILURE)
 */

int main(int ac, __attribute__((unused))char **av)
{
	list_t path;
/**	char *variable;
	char *buffer;
	char *token;
	size_t size;**/

	if (ac < 2)
	{
		printf("Usage: _which filename ...\n");
		return (-1);
	}
/**	path = _link_path("PATH");
	if (path != 0)
	{
		printf("Error linking path\n");
		return (-1);
		}**/
	printf("path.str: %s, path.len: %d\n", path.str, path.len);
	return (0);
}
