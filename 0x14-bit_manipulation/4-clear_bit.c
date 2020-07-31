/**
 * clear_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to integer number.
 * @index: position where is required to set the bit.
 *
 * Return: nothing.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = 1 << index;
	if (index > 63)
		return (-1);
	*n = *n & ~mask;
	return (1);
}
