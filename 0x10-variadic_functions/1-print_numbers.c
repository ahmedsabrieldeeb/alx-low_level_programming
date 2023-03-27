#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n:  the number of integers passed to the function
 *
 * Description: f separator is NULL, don’t print it
 * and Print a new line at the end of your function
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(args, n);

	if (separator != NULL)
		printf("%d%s", va_arg(args, int), separator);
	else
		printf("%d", va_arg(args, int));

	for (i = 1; i < n - 1; i++)
	{
		if (separator != NULL)
			printf("%d%s", va_arg(args, int), separator);
		else
			printf("%d", va_arg(args, int));
	}

	printf("%d\n", va_arg(args, int));

	va_end(args);
}
