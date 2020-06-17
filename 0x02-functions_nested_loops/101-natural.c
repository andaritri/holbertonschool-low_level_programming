#include <stdio.h>

/**
 * main - Entry point
 */

void main(void)
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
}
