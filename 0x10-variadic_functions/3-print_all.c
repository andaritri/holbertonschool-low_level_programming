#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - print a character.
 * @c: character for printing.
 *
 * Return: nothing.
 */

void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_int - print a integer
 * @i: character for printing.
 *
 * Return: nothing.
 */

void print_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_float - print a float number.
 * @f: character for printing.
 *
 * Return: nothing.
 */
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_str - print a string.
 * @s: character for printing.
 *
 * Return: nothing.
 */

void print_str(va_list  s)
{
	char *str = va_arg(s, char*);

	printf("%s", (str != NULL) ? str : "(nil)");
}

/**
 * print_all - print all the argument passed to func.
 * @format: format for printing.
 *
 * Return: nothing.
 */

void print_all(const char * const format, ...)
{
	ft types[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
		{'\0', NULL}
	};

	int i = 0, j = 0;
	va_list list;
	void (*fc)(va_list);

	va_start(list, format);
	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == types[j].ch)
			{
				fc = types[j].func;
				fc(list);
				if (format[i + 1] != '\0')
					printf(", ");
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
