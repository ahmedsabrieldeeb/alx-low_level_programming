#include <stdio.h>
#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: the integer to be converted
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int flag = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (flag)
	{
		if (n == 1)
		{
			_putchar('1');
			flag = 0;
		}
		else
		{
			temp = n >> 1;
			if (n - (temp * 2) == 0)
			{
				print_binary(temp);
				_putchar('0');
				flag = 0;
			}
			else if (n - (temp * 2) == 1)
			{
				print_binary(temp);
				_putchar('1');
				flag = 0;
			}
		}
	}
}
