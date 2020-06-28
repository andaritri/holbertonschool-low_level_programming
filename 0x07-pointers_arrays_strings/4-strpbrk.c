/**
 * _strpbrk - find the first character in the string s that matches any
 * character specified in accept.
 * @s:string to be scanned
 * @accept:string that contain the character to match.
 *
 * Return: pointer to the character in s that matches one of the characters
 * in accept or NULL if no such character is found.
 */

char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s)
	{
		p = accept;
		while (*p)
		{
			if (*p == *s)
				return (s);
			p++;
		}
		s++;
	}
	return ('\0');
}
