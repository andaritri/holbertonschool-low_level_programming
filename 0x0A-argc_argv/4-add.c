#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: number of arguments for the function
 * @argv: arguments for the function
 *
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(argv[i][0]))
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
