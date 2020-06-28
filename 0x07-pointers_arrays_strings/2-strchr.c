/**
 * _strchr - Search the ocurrence of a specified character.
 * @s: string in which the character is searched
 * @c: character that is searched.
 *
 * Return: Pointer to the first ocurrence of ch character in s string.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (s);
}
