/**
 * _memset - fill memory with a constant byte.
 * @s:Pointer to the block of memory to fill.
 * @b:Value to be set. The value is passed as an int.
 * @n:Number of bytes to be set to the value.
 *
 *Return: Pointer to block memory filled.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;
	char *p = s;

	while (count < n)
	{
		*p = b;
		count++;
		p++;
	}
	return (s);
}
