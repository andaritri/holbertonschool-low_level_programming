#include "holberton.h"

/**
 * _islower - Test wheter c is lowercase
 * @c: Caracter to test
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
