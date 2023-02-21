#include "main.h"

/**
 * print_last_digit - the entry point
 * @n: the number to be extracted from
 * Description: a function that prints the last digit of a number.
 *
 * Return: returns the lsat digit
 */

int print_last_digit(int n)
{
	int res;

	res = n - (n / 10) * 10;

	if (res >= 0)
	{
		_putchar(res + '0');
		return (res);
	}
	else
	{
		_putchar((-1 * res) + '0');
		return (-1 * res);
	}
}
