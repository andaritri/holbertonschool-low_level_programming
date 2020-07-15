/**
 * int_index - Search for the index of given number.
 * @array: array of elements
 * @size: number of elements in array
 * @cmp: pointer function to compare elements
 *
 * Return: index of the number that does matches.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == '\0' || cmp == '\0')
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
