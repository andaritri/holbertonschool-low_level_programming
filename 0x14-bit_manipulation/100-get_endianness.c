#include <stdio.h>
/**
 * get_endianness - checks the endianness.
 * another.
 *
 * Return: 0 if big endian, 1 f little endian.
 */
int get_endianness(void)
{
	unsigned int n;
	char *chars;

	n = 1;
	chars = (char *) &n;
	if (*chars)
		return (1);
	return (0);
}
