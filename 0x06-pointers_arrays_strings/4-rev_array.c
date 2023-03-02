#include "main.h"
/**
 * reverse_array - a function that reverses the content of
 * an array of integers.
 * @a: the array of integers
 * @n: elements number
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	while (i < (n / 2))
	{
		temp = *(a + i);
		*(a + i) = *(a + (n - i - 1));
		*(a + (n - i - 1)) = temp;
		i++;
	}
}
