#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals of a square matrix of
 * integers.
 * @a: square matrix of integers.
 * @size: size of the matrix
 *
 * Return: nothing.
 */

void print_diagsums(int *a, int size)
{
	int i = 0, n = 0;
	int Dmain = 0, Dsecond = 0;

	n = size - 1;
	for (i = 0; i < size; i++)
	{
		Dmain += a[i];
		Dsecond += a[n];
		a += size;
		n--;
	}
	printf("%d, %d\n", Dmain, Dsecond);
}
