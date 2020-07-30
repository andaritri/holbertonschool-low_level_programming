/**
 * binary_to_uint - covert from binary to integer.
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: the number converted.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int i;

	if (b == '\0')
		return (0);
	for (i = 0; b[i]; i++)
	;
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		sum += (*b - '0') << (i - 1);
		b++;
		i--;
	}
	return (sum);
}
