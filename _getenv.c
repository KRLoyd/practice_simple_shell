#include "test_shell.h"

extern char **environ;

/**
 * _getenv - get an environment variable without using getenv
 * @name: environment variable to look for
 *
 * Return: pointer to the variable (SUCCESS), NULL (FAILURE)
 */
char *_getenv(const char *name)
{
	char *env_value;
	char *variable;
	unsigned int i, len;
	int compare;

	i = 0;
	while (environ[i] != NULL)
	{
		variable = environ[i];
		len = _strlen_rec((char *)name);
		compare = _strncmp((char *)name, variable, len);
		if (compare == 0)
		{
			env_value = strtok(variable, "=");
			env_value = strtok(NULL, " ");
			return (env_value);
		}
		i++;
	}
 	return (NULL);
}
