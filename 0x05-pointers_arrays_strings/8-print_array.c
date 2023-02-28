#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: the array itself
 * @n: the number of elements of the array to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < (n - 1))
	{
		printf("%d, ", *(a + i));
		i++;
	}
	printf("%d\n", *(a + i));
}
