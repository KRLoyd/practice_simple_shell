#include "test_shell.h"
/**
 * _strcat - concatenates 2 strings
 * @dest: string to be added to
 * @src: string to add to dest
 *
 * Return: pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	unsigned int i, j, len;

	i = 0;
	len = _strlen_rec(dest);
/**	printf("BEFORE:\n\tdest: %s\n\tsrc: %s\n", dest, src);**/


	for (i = 0, j = len; src[i] != '\0'; i++, j++)
	{
		dest[j] = src[i];
	}
	if (dest[j] != '\0')
	{
		dest[j] = '\0';
	}
/**	printf("AFTER:\n\tdest: %s\n\n", dest); **/
	return ((char *)dest);
}
