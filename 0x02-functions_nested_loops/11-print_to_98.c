#include "main.h"

/**
 * print_to_98 - till 98
 *
 * Description: a function that prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: the number we start counting with.
 *
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 10)
			{
				_putchar(i + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				if (i != 98)
				{
					_putchar((i / 10) + '0');
					_putchar((i % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
		}
		_putchar('\n');
	}
	else
	{
		for (i = n; i >= 98; i--)
    {
        if (i >= 100)
        {
            _putchar((i / 100) + '0');
			_putchar(((i - ((i / 100) * 100)) / 10) + '0');
			_putchar(((i - ((i / 100) * 100)) % 10) + '0');
            _putchar(',');
            _putchar(' ');
        }
        else
        {
            if (i != 98)
            {
                _putchar((i / 10) + '0');
                _putchar((i % 10) + '0');
                _putchar(',');
                _putchar(' ');
            }
            _putchar((i / 10) + '0');
            _putchar((i % 10) + '0');
        }
    }
    _putchar('\n');
	}
}