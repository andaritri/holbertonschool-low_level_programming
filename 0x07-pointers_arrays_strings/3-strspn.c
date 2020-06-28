/**
 * _strspn - calculate the length of the initial segment of s which consists
 * entirely of characters in accept.
 * @s:string to be scanned
 * @accept:string that contain the list of character to match in s.
 *
 * Return: Number of characteres in the initial segment of s.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	char *p;
	int count = 0;

	while (*s)
	{
		count = 0;
		p = accept;
		while (*p)
		{
			if (*p == *s)
			{
				count++;
				len++;
			}
			p++;
		}
		if (count == 0)
			return(len);
		s++;
	}
	return (len);
}
