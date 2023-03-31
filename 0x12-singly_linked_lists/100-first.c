#include <stdio.h>

void print_statement(void) __attribute__((constructor));

/**
 * print_statement - a function to print before main()
 *
 * Return: void
 */
void print_statement(void)
{
	printf("You're beat! and yet, you must \
	allow,\nI bore my house upon my back!\n");
}
