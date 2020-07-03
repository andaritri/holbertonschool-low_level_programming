#include "holberton.h"

/**
 * _puts_recursion - print a string using recursion.
 * @s: string for printing
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	_putchar(s + 1);
}
