#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array:  pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t lo = 0;
	size_t hi = size - 1;
	size_t pos;

	if (!array)
		return (-1);
	while (lo <= hi)
	{
		pos = lo + (((double)(hi - lo) / (array[hi] -
			array[lo])) * (value - array[lo]));
		if (pos < size)
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			hi = pos - 1;
		else
			lo = pos + 1;
	}
	return (-1);
}
