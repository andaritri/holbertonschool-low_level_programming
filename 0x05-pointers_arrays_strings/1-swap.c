/**
 * swap_int - Swap two integers
 * @a: first value
 * @b: second value
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
