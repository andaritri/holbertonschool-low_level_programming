#include "holberton.h"

/**
 * _abs - Compute the absolute value of an integer number
 * @n: Number to calcule it the absolute value
 *
 * Return: Absolute value of a number.
 */

int _abs(int n)
{
	if (n >= 0)
	{
		n = n;
	}
	else
	{
		n = n * -1;
	}
	return (n);
}
