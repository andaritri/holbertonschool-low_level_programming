#include <stdlib.h>

/**
 * array_range - pointer.
 * @min: minimun value
 * @max: max value
 *
 * Return: pointer to an array contain integer number.
 */

int *array_range(int min, int max)
{
	int *array;
	int i = min;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min) + 1);
	if (array == NULL)
		return (NULL);
	for (; i <= max; i++)
		array[i] = i;
	return (array);
}
