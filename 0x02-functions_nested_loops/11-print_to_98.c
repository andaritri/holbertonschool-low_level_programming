#include "holberton.h"

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
			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
			 if (i != 98)
			  {
				  _putchar(',');
				  _putchar(' ');
			   }
		}
	}
	else
	{
		for (i = n; i <= stop; i++)
		{
			if (i / 10 != 0)
			{
				_putchar('0' + (i / 10));
				_putchar('0' + (i % 10));
				if (i != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar('0' + (i / 10));
				if (i != 98)
				{
					_putchar(';');
					_putchar(' ');
				}
			}
	        }
	}
	_putchar('\n');
}
