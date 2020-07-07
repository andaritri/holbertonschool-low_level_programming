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

	s = malloc(sizeof(str));
	start_s = s;
	if ((s == NULL) || (str == NULL))
		return (NULL);
	while (*str)
	{
		*s = *str;
		str++;
		s++;
	}
	*s = '\0';
	return (start_s);
}
