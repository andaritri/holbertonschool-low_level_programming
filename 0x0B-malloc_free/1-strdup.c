#include <stdlib.h>

/**
 * _strdup - return a pointer to newly allocated space in memory
 * @str: string to be copied.
 *
 * Return: Pointer to new array holding the copy of str.
 */

char *_strdup(char *str)
{
	char *s;
	int i = 0, j = 0;

	if (str == NULL)
		return (NULL);
	for ( ; str[j]; j++)
	{
	}
	s = malloc(sizeof(*str) * j);
	if (s != NULL)
	{
		for ( ; i <= j; i++)
			s[i] = str[i];
	}
	else
		return (NULL);
	return (s);
}
