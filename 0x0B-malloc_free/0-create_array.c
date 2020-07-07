#include <stdlib.h>

/**
 * create_array - create and init array with a c character.
 * @size: size of the array
 * @c:character to init the array
 *
 * Return: pointer to array created.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	array = malloc(sizeof(*array) * size);
	if (array == '\0' || size == 0)
		return ('\0');
	for (i = 0; i < size; i++)
		array[i] = c;
	free(array);
	return (array);
}
