#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < atoi(argv[1]); i++)
		printf("%.2x ", i);
	printf("\n");
}
