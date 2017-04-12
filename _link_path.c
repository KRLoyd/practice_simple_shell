#include "test_shell.h"
/**
 * main - create a linked list of directories contained in PATH
 *
 * Return: pointer to the first element in the list or NULL
 */
list_t *_link_path(void)
{
	char *to_link;
	char *dir;
	list_t *head;
	list_t *add_result;

	head = NULL;
	to_link = _getenv("PATH");
	if (to_link == NULL)
		return (NULL);


	dir = strtok(to_link, ":");

	while (to_link != NULL)
	{
		if (dir == NULL)
		{
			break;
		}
		add_result = _add_node_end(head, dir);
		if (add_result == NULL)
			return (NULL);
		dir = strtok(NULL, ":");
	}

	return (head);
}
