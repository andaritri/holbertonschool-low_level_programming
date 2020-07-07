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
	char *start_s;


	if (str == NULL)
		return (NULL);
	s = malloc(sizeof(str));
	if (s == NULL)
		return (NULL);
	start_s = s;
	while (*str)
	{
		*s = *str;
		str++;
		s++;
	}
	*s = '\0';
	return (start_s);
}
