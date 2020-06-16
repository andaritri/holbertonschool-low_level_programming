#include "holberton.h"

/**
 * main - Print holberton word
 *
 * Return: Always 0.
 */

int main(void)
{
	char message[] = "Holberton";
	int count = 0;

	while (message[count] != '\0')
	{
		_putchar(message[count]);
		count++;
	}
	_putchar('\n');
	return (0);
}
