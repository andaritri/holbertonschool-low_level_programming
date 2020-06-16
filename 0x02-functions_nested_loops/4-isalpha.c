#include "holberton.h"

/**
 * _isalpha - Test wheter c is lowercase
 * @c: Caracter to test
 *
 * Return: 1 if c character is in the alphabet, 0 otherwise.
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
