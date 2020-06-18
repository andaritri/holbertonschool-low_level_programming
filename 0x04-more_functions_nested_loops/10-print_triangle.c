#include "holberton.h"

/**
 * print_triangle - Print numbers from 0 to 14
 * @size: Size of the triangle
 */

void print_triangle(int size)
{
	int i, j, c;

	if (size > 0)
	{
		c = size - 1;
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < c)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(35);
				}
			}
			c--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
