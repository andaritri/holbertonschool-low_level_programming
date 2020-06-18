#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	float first, second, next;
	int c;

	first = 1;
	second = 2;
	c = 2;

	printf("%.f, %.f", first, second);
	while (c  < 98)
	{
		next = first + second;
		first = second;
		second = next;
		printf(", %.f", next);
		c++;
	}
	printf("\n");
	return (0);
}
