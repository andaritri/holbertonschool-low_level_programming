#include "holberton.h"

/**
 * aux_prime - prime numer
 * @n:integer.
 * @temp: integer.
 * Return: values or -1.
 */

int aux_prime(int n, int temp)
{
	if (temp == 1)
		return (1);
	if (n % temp == 0)
		return (0);
	return (aux_prime(n, temp - 1));
}

/**
 * is_prime_number - returns the natural square root of a number.
 * @n: integer.
 *
 * Return: 1 if prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (aux_prime(n, n - 1));
}
