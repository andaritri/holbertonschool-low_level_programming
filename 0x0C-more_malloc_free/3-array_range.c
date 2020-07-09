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
	int k = 0, i;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		array[k] = i;
		k++;
	}
	return (array);
}
