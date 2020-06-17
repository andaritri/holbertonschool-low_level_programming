#include <stdio.h>

/**
 * main - Entry point
 */

void main(void)
{
	int sum, start;

	start = 3;
	sum = 0;
	while (start < 1024)
	{
		if (start % 3 == 0  || start % 5 == 0)
		{
			sum = sum + start;
		}
		start++;
	}
	printf("%d\n", sum);
}
