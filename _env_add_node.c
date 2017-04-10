#include "test_shell.h"
/**
 * _env_add_node - add node to the end of a list_env list
 * @head: first element in the list
 * @name: variable name
 * @value: variable value
 *
 * Return:pointer to the new element (SUCCESS), NULL (FAILURE)
 */
list_env *_env_add_node(list_env *head, char *name, char *value)
{
	list_env *new_last;
	list_env *temp;

	temp = head;

	new_last = malloc(sizeof(list_env));
	if (new_last == NULL)
		return (NULL);
	new_last->name = name;
	if (new_last->name == NULL)
	{
		free(new_last);
		return (NULL);
	}
	new_last->value = value;
	if (new_last->value == NULL)
	{
		free(new_last->name);
		free(new_last);
		return (NULL);
	}
	new_last->next = NULL;

	if (head == NULL)
	{
		head = new_last;
		return (new_last);
	}

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_last;
	return (new_last);
}
