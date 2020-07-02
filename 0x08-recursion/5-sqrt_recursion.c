#include "holberton.h"
/**
 * zoom - calculate square
 * @n:integer.
 * @a: integer.
 * Return: values or -1.
 */

int zoom(int n, int a)
{
	if (n <= 0 || n < a * a)
	{
		return (-1);
	}
	if (n == a * a)
	{
		return (a);
	}
	return (zoom(n, a + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer.
 * Return: values.
 */

int _sqrt_recursion(int n)
{
	return (zoom(n, 1));
}
