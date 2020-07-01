#include "holberton.h"

/**
 * _puts_recursion - print a string using recursion.
 * @s: string for printing
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*++s)
		_puts_recursion(s);
	else
	{
		_putchar('\n');
		return;
	}
}
