/**
 * char *_strcat - Joint two string
 * @dest: String to destine
 * @src: String source
 *
 * Return: Pointer to string concatenated
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
		p++;
	while (1)
	{
		*p = *src;
		if (*src == '\0')
			break;
		p++;
		src++;
	}
	return (dest);
}
