#include "holberton.h"

/**
 * aux_sqrt - calculate square
 * @n:integer.
 * @a: integer.
 * Return: values or -1.
 */

int aux_sqrt(int n, int a)
{
	if (n <= 0 || n < a * a)
	{
		return (-1);
	}
	if (n == a * a)
	{
		return (a);
	}
	return (aux_sqrt(n, a + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer.
 * Return: values.
 */

int _sqrt_recursion(int n)
{
	return (aux_sqrt(n, 1));
}
