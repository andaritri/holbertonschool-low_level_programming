#include "holberton.h"
/**
 * get_bit - get the value of a bit at a given index.
 * @n: integer number.
 * @index: position where is required to get the bit.
 *
 * Return: nothing.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n & (1 << index)) != 0);
}
