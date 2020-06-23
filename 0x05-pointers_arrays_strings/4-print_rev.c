#include "holberton.h"

/**
 * print_rev - Display a string s in reverse sense.
 * @s: string to reverse
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i, count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	for (i = 0; i < count; i++)
		_putchar(*(--s));
	_putchar('\n');
}
