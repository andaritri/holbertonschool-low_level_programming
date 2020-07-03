#include "holberton.h"

/**
 * aux_palindrome - Performe recursive process to determine if a word is
 * palindrome.
 * @s: string to check if it's palindrome
 * @start: always 0.
 * @end: always the lenght of the string - 1.
 *
 * Return: 1 is the word is palindrome, 0 otherwise.
 */

int aux_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	else if (*(s + start) != *(s + end))
		return (0);
	return (aux_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - Determine if a word is palindrome
 * @s: word to check
 *
 * Return: 1 if the word is palindrome, 0 otherwise.
 *
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (aux_palindrome(s, 0, len - 1));
}
