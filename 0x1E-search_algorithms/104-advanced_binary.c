#include "search_algos.h"
/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array:  pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (binary_aux(array, 0, size - 1, value));
}
/**
 * binary_aux - searches for a value in a sorted array of integers of
 * recursive way.
 * @arr:  pointer to the first element of the array to search in
 * @lo: index lower.
 * @hi: index higher.
 * @val: value to search for
 *
 * Return: index where value is located
 */
int binary_aux(int *arr, size_t lo, size_t hi, int val)
{
	size_t mid = (lo + hi) / 2;

	if (lo == hi && arr[mid] == val)
		return (mid);
	else if (lo == hi && arr[mid] != val)
	{	print_array(arr, lo, hi);
		return (-1);
	}
	print_array(arr, lo, hi);
	if (arr[mid] >= val)
		return (binary_aux(arr, lo, mid, val));
	else
		return (binary_aux(arr, mid + 1, hi, val));
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
