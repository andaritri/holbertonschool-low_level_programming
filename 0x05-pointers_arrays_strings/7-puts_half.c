#include "holberton.h"

/**
 * puts_half - Print half of the string
 * @str: string to manipulate
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, j, half, len = 1;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	if (len % 2 == 0)
	{
		half = len / 2;
		for (j = half; j < len - 1; j++)
			_putchar(str[j]);
	}
	else
	{
		half = (len - 1) / 2;
		for (j = half; j < len - 1; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}
