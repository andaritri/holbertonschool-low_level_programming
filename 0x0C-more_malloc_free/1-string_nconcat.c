#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - Concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to copy from s2 into s1.
 *
 * Return: pointer to new string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int i;
	unsigned int j, l = _strlen(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= l)
		n = l;
	str = malloc(sizeof(char) * (_strlen(s1) + n + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
		str[i + j] = s2[j];
	str[i + j] = '\0';
	return (str);
}


/**
 * _strlen - Calculate the lenght of a string
 * @s: string
 *
 * Return: lenght of the s string
 */

int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		s++;
		c++;
	}
	return (c);
}
