#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - Print numbers from n to 98
 * @n: Reference value
 */

void print_to_98(int n)
{
	int stop = 98;
	int i = 0;

	if (n >= stop)
	{
		for (i = n; i >= stop; i--)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d", i);
			}
		}
	}
	else
	{
		for (i = n; i <= stop; i++)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d", i);
			}
		}
	}
	printf("\n");
}
