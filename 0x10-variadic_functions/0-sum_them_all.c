#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all -  that returns the sum of all its parameters.
 * @n: the number of arguments to be summed up
 *
 * Return: the sum (int) or 0 if (n == 0)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
