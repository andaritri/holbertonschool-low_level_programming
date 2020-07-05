#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments for the function
 * @argv: arguments for the function
 *
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int cent = 0;
	int n_coins = 0, i = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	if (cent < 0)
		printf("0\n");
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (cent % coins[i] == 0)
			{
				n_coins += cent / coins[i];
				break;
			}
			else
			{
				n_coins += cent / coins[i];
				cent = cent % coins[i];
			}
		}
		printf("%d\n", n_coins);
	}
	return (0);
}
