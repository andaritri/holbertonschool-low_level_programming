#include <stdio.h>

/**
 * print_times_table - Print table
 * @n: Table for printing
 *
 * return: Nothing
 */

void print_times_table(int n)
{
	int row, col, r;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			col = 0;
			for (col = 0; col <= n; col++)
			{
				r = row * col;
				if (col != n)
				{
					if (row + r < 10)
					{
						printf("%d,   ", r);
					}
					else if (row + r >= 10 && row + r < 100)
					{
						printf("%d,  ", r);
					}
					else
					{
						printf("%d, ", r);
					}
				}
				else
				{
					printf("%d", r);
				}
			}
			printf("\n");
		}
	}
}
