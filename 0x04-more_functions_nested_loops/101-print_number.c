#include "holberton.h"

/**
 * print_number - print number
 * @n: number to return
 * Return: void
 */

void print_number(int n)
{

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (!(n / 10))
		_putchar('0' + n % 10);
	else
	{
		print_number(n / 10);
		_putchar('0' + n % 10);
	}
}
