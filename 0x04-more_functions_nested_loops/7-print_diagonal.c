#include "main.h"


/**
 * print_diagonal - function name
 * @n: is an integer argument used as to print \
 *
 * Description: a function that draws a diagonal line in the terminal.
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
		_putchar('\n');
	}
}
