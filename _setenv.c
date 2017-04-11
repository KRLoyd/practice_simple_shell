#include "test_shell.h"
/**
 * _setenv - change or add an environment variable
 * @name: name of variable
 * @value: variable value
 * @overwrite: overwrite instructions: 0: do not overwrite, nonzero: overwrite
 *
 * Return: 0 (SUCCESS), -1 (FAILURE)
 */
int _setenv(const char *name, const char *value, int overwrite)
{

	extern char **environ;
	int i, compare;
	unsigned int nlen, vlen;
	char *new_array;

	if (name == NULL)
		return (-1);

	nlen = _strlen_rec((char *)name);
	    if (nlen == 0)
		    return (-1);

	vlen = _strlen_rec((char *)value);
	new_array = malloc(sizeof(nlen + vlen + 2));
	if (new_array == NULL)
	{
		perror("malloc for new_array failed");
		return (-1);
	}

	new_array = _strcpy(new_array, (char *)name);
	new_array = _strcat(new_array, "=");
	new_array = _strcat(new_array, (char *)value);

	for (i = 0; environ[i] != NULL; i++)
	{
		compare = strncmp(name, environ[i], nlen);
		if (compare == 0 && overwrite == 0)
		{
			printf("environ[i] before: %s\n", environ[i]);
			environ[i] = new_array;
			printf("\tenviron[i] after: %s\n", environ[i]);
		}
		else if (compare == 0 && overwrite != 0)
		{
			printf("environ[i]: %s\n", environ[i]);
		}

	}
	return (0);
}
