#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	long int sum;
	int start;

	start = 0;
	sum = 0;
	while (start < 1024)
	{
		if (start % 3 == 0  || start % 5 == 0)
		{
			sum = sum + start;
		}
		start++;
	}
	printf("%li\n", sum);
	return (0);
}
