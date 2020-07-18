#ifndef HEADER_H
#define HEADER_H
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct formats - Define format to print.
 * @ch: pointer to character.
 * @func: fucn pointer.
 *
 * Description: struct to define specifier format.
 */

typedef struct formats
{
	char ch;
	void (*func)(void *);
} ft;

void print_all(const char * const format, ...);
#endif
