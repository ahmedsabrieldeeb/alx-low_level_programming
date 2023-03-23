#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: the name will be printed
 *
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
