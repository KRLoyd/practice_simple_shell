#include "test_shell.h"

/**
 * _print_liststr - prints the elements off a list_t list
 * @h: listint_t list to evaluate
 *
 * Return: number of nodes in the list
 **/

size_t _print_liststr(list_t *h)
{
	list_t *ptr;
	size_t counter;

	counter = 0;

	if (h == NULL)
		return (counter);

	ptr = h;

	while (ptr != NULL)
	{
		dprintf(2, "%s\n", ptr->str);
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
