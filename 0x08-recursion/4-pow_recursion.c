/**
 * _pow_recursion - calcule the power of x power y
 * @x: base
 * @y: power
 *
 * Return: power of x power y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
