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
	struct list_env *envptr;
	unsigned int i;
	char *env_name, env_value, single_env, last_node;

	i = 0;

	while (environ[i] != NULL)
	{
		single_env = environ[i];
		env_name = strtok(single_env, "=");
		env_value = strtok(NULL, " ");
		last_node = _env_add_node(env_name, env_value);
		if (add_result = NULL)
			return (-1);
		i++;
	}

	return (0);
}
