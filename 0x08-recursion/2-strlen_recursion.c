/**
 * _strlen_recursion - Calculate leght of a string.
 * @s: string to calculate lenght.
 *
 * Return: lenght of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (_strlen_recursion(s + 1) + 1);
	return (0);
}
