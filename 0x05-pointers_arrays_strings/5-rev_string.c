#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - reverse a string s.
 * @s: string to reverse.
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, k, count = 0;
	char arr[100];

	for (i = 0; s[i] != '\0'; i++)
		arr[i] = s[i];

	for (k = i - 1; k >= 0; k--)
	{
		s[k] = arr[count];
		count++;
	}
}
