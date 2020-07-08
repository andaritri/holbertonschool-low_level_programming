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
	s = malloc(sizeof(char) * (j + 1));
	if (s == NULL)
		return (NULL);
	else
	{
		for ( ; str[j]; j++)
		{
			s[j] = str[j];
		}
		s[j] = '\0';
	}
	return (s);
}
