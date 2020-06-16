#include "holberton.h"

/**
 * times_table - Display multiply table.
 */

void times_table(void)
{
	int i, j, n;
	int count;

	for (i = 0; i <= 9; i++)
	{
		count = 0;
		for (j = 0; j <= 9; j++)
		{
			n = i * j;
			if (n / 10 == 0)
			{
				_putchar((n % 10) + '0');
				if (count != 9)
				{
					if (i * (j + 1) > 9)
					{
						_putchar(',');
						_putchar(' ');
					}
					else
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
				}
			}
			else
			{
				_putchar('0' + (n / 10));
				_putchar('0' + (n % 10));
				if (count != 9)
				{
					if (i * (j + 1) > 9)
                                        {
						_putchar(',');
						_putchar(' ');
					}
					else
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
				}
			}
			count++;
		}
		_putchar('\n');
	}
}
