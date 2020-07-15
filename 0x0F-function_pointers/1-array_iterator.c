#include <stdlib.h>

/**
 * array_iterator - print element of an array
 * @array: array
 * @size: elements of the array
 * @action: function pointer.
 *
 * Return: nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;


	if (action == '\0' || size <= 0 || array == '\0')
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
