#include "main.h"

/**
 * print_triangle - function name
 * @size: an integer to define the size
 *
 * Description: a function that prints a triangle,
 * followed by a new line.
 *
 * Return: void
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j, k;

		for (i = 0; i < size; i++)
		{
			for (j = size - 1; j > 0; j--)
			{
				_putchar(' ');
			}
			for (k = 0; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
