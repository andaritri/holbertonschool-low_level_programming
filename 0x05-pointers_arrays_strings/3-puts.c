#include "holberton.h"

/**
 * _puts - Display a string
 * @str: String to show
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
