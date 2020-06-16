#include "holberton.h"

/**
 * print_sign - Test wheter c is greater than zero, less or iqual to zero.
 * @c: Number to test
 *
 * Return: Sign from a number.
 */

int print_sign(int c)
{
	char sign;
	int value;

	if (c > 0)
	{
		value = 1;
		sign = '+';
	}
	else if (c < 0)
	{
		value = -1;
		sign = '-';
	}
	else
	{
		value = 0;
		sign = '0';
	}
	_putchar(sign);
	return (value);
}
