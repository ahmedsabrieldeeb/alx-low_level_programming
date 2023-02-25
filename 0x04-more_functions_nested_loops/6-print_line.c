#include "main.h"
/**
 * print_line - function name
 * @n: is an integer argument used as to print _
 *
 * Description: a function that draws a straight line in the terminal.
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
