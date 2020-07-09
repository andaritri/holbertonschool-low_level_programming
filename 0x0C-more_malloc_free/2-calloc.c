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

/**
* _memset - fill memory with a constant byte.
* @s:Pointer to the block of memory to fill.
* @b:Value to be set. The value is passed as an int.
* @n:Number of bytes to be set to the value.
*
* Return: Pointer to block memory filled.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;
	char *p = s;

	while (count < n)
	{
		*p = b;
		count++;
		p++;
	}
	return (s);
}
