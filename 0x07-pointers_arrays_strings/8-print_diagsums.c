#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of
 * the two diagonals of a square matrix of integers.
 * @a: the integer array
 * @size: size of square matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int *p = (int *)a;
	int sum1 = 0, sum2 = 0;
	int i, j;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + *p;
		p = p + (size + 1);
	}

	p = (int *)a + (size - 1);

	for (j = 0; j < size; j++)
	{
		sum2 = sum2 + *p;
		p = p + (size - 1);
	}
	printf("%d, %d\n", sum1, sum2);
}
