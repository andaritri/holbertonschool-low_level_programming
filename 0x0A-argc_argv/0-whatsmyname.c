#include <stdio.h>

/**
 * main - entry point
 * @argc: number of arguments for the function
 * @argv: arguments for the function
 *
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
