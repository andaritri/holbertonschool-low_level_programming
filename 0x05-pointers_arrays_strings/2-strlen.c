/**
 * _strlen - Calculate the lenght of a string
 * @s: string
 *
 * Return: lenght of the s string
 */

int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		s++;
		c++;
	}
	return (c);
}
