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
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
