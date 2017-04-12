#ifndef __TEST_SHELL__
#define __TEST_SHELL__
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <sys/wait.h>
#define BUFSIZE 1024
#define ENV extern char **environ
#define PROMPT "$ "
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
/**
 * struct list_env - singly linked list of environmental variables
 * @name: variable name
 * @value: variable value
 * @next: next element in the list
 */
typedef struct list_env
{
	char *name;
	char *value;
	struct list_env *next;
} list_env;
list_t *_add_node_end(list_t **head, char *str);
void clear_buff(char *buffer);
list_env *_env_add_node(list_env *head, char *name, char *value);
void error_handle(int num, int fd);
char *_getenv(const char *name);
list_t *_link_path(void);
size_t _print_liststr(list_t *h);
int _setenv(const char *name, const char *value, int overwrite);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
int _strncmp(char *s1, char *s2, unsigned int n);
int _strlen_rec(char *s);
char *_which(char *str, list_t *list);
#endif /* __TEST_SHELL__ */
