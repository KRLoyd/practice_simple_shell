All files are compiled with `gcc -Wall -Wextra -Werror -pedantic'


## Main Files

#### `test_shell.h`
Header file listing all prototype and data structures used in the Main Files and the Secondary Files.

#### `example_pid.c`
Function created by Holberton School to show a use of `getpid`.
* Returns: The current process' ID
* man 2 `getpid` for more information

#### `getppid.c`
Program that prints the PID of the parent process.

#### `print_maxpid.c`
Shell script that prints the maximum value a process ID can be.

#### `av.c`
Program that prints all the arguments passed to it.

#### 'prompt.c'
Program that prints a prompt, waits for the user to enter a command, and then prints the command on the next line.

#### `strtok.c`
Function that splits a string.
* Return: pointer to the array of each word of the string

#### `example_main_env.c`
Function created by Holberton School to show `int main(int ac, char **av, char **env)`

#### `environ.c`
Program that prints the environment using global variable `environ`.

#### `env_vs_environ.c`
Program that prints the address of `env` and `environ`.

#### `f_w_e.c`
Program that executes `ls -l /tmp` 5 times in different child processes.


#### `_getenv.c`
Function that gets an environment variable without using `getenv`.
* Prototype: `char *_getenv(const char *name);`
* Return: pointer to the variable (SUCCESS), NULL (FAILURE)

#### `_print_path.c`
Function that prints each directory contained in the environment variable `PATH`.

#### `_link_path.c`
Function that builds a linked list of the `PATH` directories.

#### `

## Secondary Files

#### `my_test_main.c`
Function template to test each files in the Main Files list.

#### `_add_node_end.c`
Function that adds a node at the end of a list_t list.
* Prototype: `list_t *_add_node_end(list_t *head, char *str);`
  * Return: pointer to the added node (SUCCESS), NULL (FAILURE)

#### `_strcpy.c`
Copies string pointed to by second string to buffer pointed to by first string.
* Prototype: `char *_strcpy(char *dest, char *src);
* Return: pointer to dest

#### `_strlen_rec.c`
Finds the length of a string recursively.
* Prototype: `int _strlen_rec(char *s);`
* Return: length of s

#### `_strncmp.c`
Compares two character strings up to n bytes.
* Prototype: `int _strncmp(char *s1, char *s2, unsigned int n);`
Return: 0 (SUCCESS), -1 (FAILURE)
