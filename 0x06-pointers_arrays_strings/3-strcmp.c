/**
 *_strcmp - Compare two string
 * @s1: First string
 * @s2: Second String
 *
 * Return: Integer number.
 */

int _strcmp(char *s1, char *s2)
{
	char *r = s1;
	char *l = s2;
	int res = 0;

	while (1)
	{
		if (*l != *r)
		{
			res = *l - *r;
			break;
		}
		else
		{
			if (*(l + 1)  == '\0' && *(r + 1) == '\0')
			{
				break;
			}

			else
			{
				l++;
				r++;
				continue;
			}
		}
	}
	return (res);
}
