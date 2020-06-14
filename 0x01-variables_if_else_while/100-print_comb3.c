#include <stdio.h>

/**
 * main- Entry point
 * @void: Null value
 *
 * Description: Print numbers from 00 to 99
 * Return: Zero value
 */

int main(void)
{
	int i, count = 0;
	int j;

	while (i <= 8)
	{
		j = i + 1;
		while (j <= 9)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (count != 44)
			{
				putchar(',');
				putchar(' ');
			}
			count++
			j++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
