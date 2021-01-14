#include <math.h>
#include "search_algos.h"
/**
 * min - calculate the minimum value betwen two positive nummbers
 * @a: first positive number
 * @b: second positive number
 *
 * Return: the greter betwen a and b
 */
int min(size_t a, size_t b)
{
	return (a < b ? a : b);
}
/**
 * jump_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array:  pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = (size_t) sqrt(size);
	size_t lo, hi;

	if (!array)
		return (-1);
	lo = hi = 0;
	while (hi < size && array[hi] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", hi, array[hi]);
		hi = lo + jump;
		if (hi < size && array[hi] >= value)
			break;
		if (hi < size)
			lo += jump;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", lo, hi);
	hi = min(hi, size);
	for (; lo < hi; lo++)
	{
		printf("Value checked array[%lu] = [%d]\n", lo, array[lo]);
		if (array[lo] == value)
			return (lo);
	}
	return (-1);
}
