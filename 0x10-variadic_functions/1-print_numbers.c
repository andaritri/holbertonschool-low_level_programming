#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print all of numbers passed as arguments to function.
 * @separator: separator character to display the numbers.
 * @n: number of arguments passed to function.
 *
 * Return: nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (n == 0)
		return;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(ap, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
