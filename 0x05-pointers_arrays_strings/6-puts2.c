#include "holberton.h"
#include <stdio.h>

/**
 * puts2 - print string
 * @str: string to print
 *
 * Return: nothing
 */

void puts2(char *str)
{
	while (1)
	{
		_putchar(*str);
		str = str + 2;
		if (*str == '\0')
			break;
	}
	_putchar('\n');
}
