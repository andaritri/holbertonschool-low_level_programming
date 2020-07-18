#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print all of string passed like arguments to func.
 * @separator: string to separate the string printed.
 * @n: amount of string passed to func.
 *
 * Return: nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
