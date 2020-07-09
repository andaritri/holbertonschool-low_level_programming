#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of members of the array
 * @size: size bytes.
 *
 * Return: pointer to the allocate memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	_memset(p, 0, nmemb * size);
	return (p);
}
