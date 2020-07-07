#include <stdlib.h>
#include <string.h>

/**
 * _strdup - return a pointer to newly allocated space in memory
 * @str: string to be copied.
 *
 * Return: Pointer to new array holding the copy of str.
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i = 0;


	if (str == NULL)
		return (NULL);
	s = malloc(sizeof(*str) * (strlen(str) + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < strlen(str) + 1; i++)
		s[i] = str[i];
	return (s);
}
