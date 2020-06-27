/**
 * leet - encode a string
 * @s: string to encode
 *
 *Return: pointer to the string in uppercase format
 */

char *leet(char *s)
{
	int j = 0, i = 0;
	char lower[] = "aeotl";
	char upper[] = "AEOTL";
	char num[] = "43071";

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; i < 5; i++)
		{
			if (lower[i] == s[j] || upper[i] == s[j])
				s[j] = num[i];
		}
	}
	return (s);
}
