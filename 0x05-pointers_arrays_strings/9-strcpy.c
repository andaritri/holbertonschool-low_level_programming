#include <stdio.h>

/**
 * *_strcpy - copy string
 * @dest: array
 * @src: string to copy
 *
 * Return: String copied
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (1)
	{
		dest[len] = src[len];
		if (src[len] == '\0')
			break;
	}
	return (dest);
}
