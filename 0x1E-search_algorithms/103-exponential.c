#include "search_algos.h"
/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array:  pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t step, lo, hi;

	if (!array)
		return (-1);
	for (step = 1; step < size && array[step] < value; step *= 2)
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
	lo = step / 2;
	hi = min(step, size - 1);
	printf("Value found between indexes [%lu] and [%lu]\n", lo, hi);
	return (binary_search_exp(array, lo, hi, value));
}
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
 * binary_search_exp - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array:  pointer to the first element of the array to search in
 * @lo: index lower
 * @hi: index higher
 * @value: Value to search for.
 *
 * Return: index where value is located
 */
int binary_search_exp(int *array, size_t lo, size_t hi, int value)
{
	size_t mid;

	if (!array)
		return (-1);
	while (lo <= hi)
	{
		print_array(array, lo, hi);
		mid = (lo + hi) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			hi = mid - 1;
		else
			lo = mid + 1;
	}
	return (-1);
}
/** Function to print an array of integers */
/**
 * print_array - print the elements of array between the indixes left and right
 * @array: pointer to the first element of the array to print
 * @lo: Starting index
 * @hi: Ending index
 *
 * Return: always 0.
 */
int print_array(int *array, size_t lo, size_t hi)
{
	printf("Searching in array: ");
	for (; lo <= hi; lo++)
	{
		printf("%i", array[lo]);
		if (lo != hi)
			printf(", ");
	}
	printf("\n");
	return (0);
}
