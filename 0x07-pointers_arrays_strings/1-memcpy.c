/**
 * _memcpy - Copy n characters from memory area src to memory area dest.
 * @dest: Pointer to the destination array where the content will be copied
 * @src: Pointer to the source of data to be copied.
 * @n: Number of bytes to be copied.
 *
 * Return: Pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}
	return (dest);
}
