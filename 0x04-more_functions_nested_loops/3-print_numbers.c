#include "main.h"

/**
 * print_numbers - the function name
 *
 * Description: prints the numbers, from 0 to 9,
 * followed by a new line.
 *
 * Return: returns nothing
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return;
}
