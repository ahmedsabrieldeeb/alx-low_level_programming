#include "main.h"
/**
 * print_sign - the function name
 * @n: thenumber to be tested
 *
 * Description: a function that prints the sign of a number.
 *
 * Return: returns 1 if n is pos,
 * -1 if n is neg,
 * 0 if n is zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
