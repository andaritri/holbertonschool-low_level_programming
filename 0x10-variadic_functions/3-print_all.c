#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - print a character.
 * @c: character for printing.
 *
 * Return: nothing.
 */

void print_char(void *c)
{
	printf("%c", *((char *)c));
}

/**
 * print_int - print a integer
 * @i: character for printing.
 *
 * Return: nothing.
 */

void print_int(void *i)
{
	printf("%d", *((int *)i));
}

/**
 * print_float - print a float number.
 * @f: character for printing.
 *
 * Return: nothing.
 */
void print_float(void *f)
{
	printf("%f", *((float *)f));
}

/**
 * print_str - print a string.
 * @s: character for printing.
 *
 * Return: nothing.
 */

void print_str(void *s)
{
	printf("%s", (char *)s ? (char *)s : "(nil)");
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
	void *p;
	char *separator;
	va_list list;

	va_start(list, format);
	separator = "";
	while (format[i] != '\0' && format != NULL)
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == types[j].ch)
			{
				printf("%s", separator);
				p = va_arg(list, void *);
				types[j].func(p);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
