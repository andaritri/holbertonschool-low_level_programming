#include "holberton.h"

/**
 * print_alphabet_x10 - Print alphabet in lowercase x10
 */

void print_alphabet_x10(void)
{
	int c = 'a';
	int count = 0;

	while (count < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		c = 'a';
		count++;
		_putchar('\n');
	}
}
