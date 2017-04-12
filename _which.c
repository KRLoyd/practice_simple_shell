#include "test_shell.h"
/**
 * _which - looks for files in the current PATH
 *
 * Return: filepath (SUCCESS), NULL (FAILURE)
 */

char *_which(char *str, list_t *list)
{
	char *half_path;
	char *full_path;
	char *liststr;
	int access_result;

	liststr = malloc(sizeof(BUFSIZE));
	if (liststr == NULL)
	{
		perror("Malloc Error:\n");
		return (NULL);
	}
	half_path = malloc(sizeof(BUFSIZE));
	if (half_path == NULL)
	{
		perror("Malloc Error:\n");
		return (NULL);
	}
	full_path = malloc(sizeof(BUFSIZE));
	if (full_path == NULL)
	{
		perror("Malloc Error:\n");
	}
	while (list != NULL)
	{
		clear_buff(full_path);
		clear_buff(half_path);
		clear_buff(liststr);

		liststr = _strcpy(liststr, list->str);
		half_path = _strcat(liststr, "/");
		if (half_path == NULL)
			return (NULL);
		printf("half-path: %s\n", half_path);
		full_path = _strcat(half_path, str);
		printf("full-path: %s\n\n", full_path);
		if (full_path == NULL)
			return (NULL);

		else
		{
			access_result = access(full_path, X_OK);
			if (access_result == 0)
			{
				printf("can access file!\n");
				return (full_path);
			}
		}
		list = list->next;
	}
	return (str);
}
