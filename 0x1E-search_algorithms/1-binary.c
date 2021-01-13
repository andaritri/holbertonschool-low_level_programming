#include "search_algos.h"
/**
 * print_array - print the elements of array between the indixes left and right
 * @array: pointer to the first element of the array to print
 * @left: Starting index
 * @right: Ending index
 *
 * Return: always 0.
 */

int print_array(int *array, size_t left, size_t right)
{
	printf("Searching in array: ");
	for (; left <= right; left++)
	{
		printf("%i", array[left]);
		if (array[left] != array[right])
			printf(", ");
	}
	printf("\n");
	return (0);
}
/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array:  pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;

	if (!array)
		return (-1);
	while (left <= right)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;

	}
	return (-1);
}
