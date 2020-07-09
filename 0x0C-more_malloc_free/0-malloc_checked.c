#include <stdlib.h>

/**
 * malloc_checked - Allocate memory
 * @b: amount of memory to allocate.
 *
 * Return: nothing.
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
