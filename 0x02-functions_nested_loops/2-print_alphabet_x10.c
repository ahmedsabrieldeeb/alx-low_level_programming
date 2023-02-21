#include "main.h"
/**
 * print_alphabet_x10 - the entry point
 *
 * Description: a program that prints the alphabet in lowercase
 * ten times followed by a new line.
 *
 * Return: returns nothing
 */

void print_alphabet_x10(void)
{
	char alph[] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(alph[i]);
		}
		_putchar('\n');
	}
}
