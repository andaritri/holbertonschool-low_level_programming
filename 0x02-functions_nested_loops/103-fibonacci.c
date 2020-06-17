#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int first, second, c, next;

	first = 1;
	second = 2;
	c = 2;

	next = first + second;
	while (next  < 4000000)
	{
		next = first + second;
		first = second;
		second = next;
		if (next % 2 == 0)
		{
			c = c + next;
		}
	}
	printf("%d", c);
	printf("\n");
	return (0);
}
