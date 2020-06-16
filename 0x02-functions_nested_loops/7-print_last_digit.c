#include "holberton.h"

/**
 * print_last_digit - Display last digit of the a number.
 * @n: Number to test
 *
 * Return: Last digit of an integer number
 */

int print_last_digit(int n)
{
	int value;

	if (n % 10 < 0)
	{
		value = -1 * (n % 10);
	}
	else
	{
		value = n % 10;
	}
	_putchar('0' + value);
	return (value);
}
