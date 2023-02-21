#include "main.h"
/**
 * print_alphabet - the entry point
 *
 * Description: a program that prints the alphabet in lowercase,
 * followed by a new line.
 *
 * Return: returns nothing
 */

void print_alphabet(void)
{
	char alph[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(alph[i]);
	}
	_putchar('\n');
}
