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
	size_t nodes;

	head = NULL;
	to_link = _getenv("PATH");
	if (to_link == NULL)
	{
		return (NULL);
	}

	dir = strtok(to_link, ":");

	while (to_link != NULL)
	{
		printf("dir: \n");
		if (dir == NULL)
		{
			break;
		}
		if (dir != NULL)
		{
			add_result =  _add_node_end(&head, dir);
			if (add_result == NULL)
			{
				return (NULL);
				}
		}
		dir = strtok(NULL, ":");
	}
	return (head);
}
