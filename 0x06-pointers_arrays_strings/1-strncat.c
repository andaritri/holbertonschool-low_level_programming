/**
 * char *_strncat - Joint two string
 * @dest: String to destine
 * @src: String source
 * @n: nummber of the elements to concat
 *
 * Return: Pointer to string concatenated
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	char *p = dest;

	while (*p != '\0')
		p++;
	while (1)
	{
		if (*src == '\0' || count == n)
			break;
		*p = *src;
		count++;
		p++;
		src++;
	}
	return (dest);
}
