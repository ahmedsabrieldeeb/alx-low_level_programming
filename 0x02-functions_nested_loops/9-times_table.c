#include "main.h"
/**
 * times_table - printing time table
 *
 * Description: a function that prints the 9 times table,
 * starting with 0.
 *
 * Return: void.
 */

void times_table(void)
{
	int row, dum, col;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (col = 1; col <= 9; col++)
		{
			dum = (row * col);

			if ((dum / 10) > 0)
			{
				_putchar((dum / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}

			_putchar((dum % 10) + '0');

			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
