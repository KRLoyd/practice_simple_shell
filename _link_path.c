#include "test_shell.h"
/**
 * main - create a linked list of directories contained in PATH
 *
 * Return: 0
 */
int main(void)
{
	char *to_link;
	char *dir;
	list_t *head;
	list_t *add_result;

	head = NULL;
	to_link = _getenv("PATH");
	if (to_link == NULL)
		return (-1);


	dir = strtok(to_link, ":");

	while (to_link != NULL)
	{
		printf("\tgot inside while loop\n");
		if (dir == NULL)
		{
			printf("\t dir == NULL\n");
			_print_liststr(head);
			break;
		}
		printf("\t dir: %s\n", dir);
		add_result = _add_node_end(head, dir);
		if (add_result == NULL)
			return (-1);
		printf("\t node added\n");
		dir = strtok(NULL, ":");
	}

	return (0);
}
