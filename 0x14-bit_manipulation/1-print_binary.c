#include "holberton.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: integer number to convert to binary.
 *
 * Return: nothing.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	printf("%lu", n & 1);
}
