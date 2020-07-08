#include <stdlib.h>

/**
 * str_concat - Concatenate two string
 * @s1: First string
 * @s2: second string
 *
 * Return: pointer to the new string concatenated
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, c, b, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (c = 0; s1[c]; c++)
	{
	}
	for (b = 0; s2[b]; b++)
	{
	}
	s = malloc(sizeof(char) * (c + b + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		s[i] = s1[i];
	for (j = i; s2[k]; j++)
	{
		s[j] = s2[k];
		k++;
	}
	s[j] = '\0';
	return (s);
}
