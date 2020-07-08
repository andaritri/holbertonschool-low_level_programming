#include <stdlib.h>

/**
 * argstostr - concat the argumens of a program
 * @ac: count number of args passed to program
 * @av: args passed to program.
 *
 * Return: pointer to new string.
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, l, n, c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			c++;
	}
	str = malloc(sizeof(char) * (c + ac - 1));
	if (str == NULL)
		return (NULL);
	n = 0;
	for (k = 1; k < ac; k++)
	{
		for (l = 0; av[k][l]; l++)
		{
			str[n] = av[k][l];
			n++;
		}
		str[n] = '\n';
		n++;
	}
	return (str);
}
