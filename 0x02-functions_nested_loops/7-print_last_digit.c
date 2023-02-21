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
	_putchar('\n');
	return (n - (n / 10) * 10);
}
