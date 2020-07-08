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
	for ( ; str[i]; i++)
	{
	}
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);
	for ( ; j <= i; j++)
		s[j] = str[j];
	return (s);
}
