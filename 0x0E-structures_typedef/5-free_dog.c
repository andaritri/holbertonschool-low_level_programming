#include <stdlib.h>
#include "dog.h"

/**
* free_dog - free dogs
* @d: dog struct
*
* Return: nothing.
*/

void free_dog(dog_t *d)
{
	if (d == '\0')
		return (0);
	free((*d).name);
	free((*d).owner);
	free(d);
}
