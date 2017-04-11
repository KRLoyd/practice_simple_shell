#include "test_shell.h"
/**
 * _strcpy - copy string pointed to by second string to buffer pointed to by
 * first string
 * @dest: first string, has buffer
 * @src: second string, to be copied
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char * src)
{
	unsigned int i, len;

	len = _strlen_rec(src);
	for ( i = 0; i < len; i++)
		dest[i] = src[i];
	dest[len] = '\0';
	return ((char *)dest);
}
