#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: a constant pointer to a char
 *
 * Description: where format is a list of types of arguments passed
 * to the function
 *	    c: char
 *		i: integer
 *		f: float
 *		s: char * (if the string is NULL, print (nil) instead
 *		any other char should be ignored
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	op_t op[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
	};
	char *sep = "";

	va_start(args, format);
	i = 0;
	while (format != NULL && *(format + i) != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (*(format + i) == op[j].op)
			{
				printf("%s", sep);
				op[j].fun(args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}

/**
 * print_str - print string
 * @args: pointer
 *
 * Return: nothing
 */

void print_str(va_list args)
{
	char *str = va_arg(args, char*);

	str = (str == NULL) ? "(nil)" : str;
	printf("%s", str);
}

/**
 * print_int - print integer
 * @args: pointer
 *
 * Return: nothing
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_char - print character
 * @args: pointer
 *
 * Return: nothing
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_float - print float number
 * @args: pointer
 *
 * Return: nothing
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
