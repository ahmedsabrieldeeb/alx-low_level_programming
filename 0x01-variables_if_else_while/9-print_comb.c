#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point
 *
 * Description: prints all possible combinations of single-digit numbers.
 * Numbers must be separated by ,, followed by a space
 * Numbers should be printed in ascending order
 * using just putchar function with 4 times maximum
 *
 * Return: returns zero once completion successfully
 */

int main(void)
{
	int i;

	for (i = 48; i < 57; i++)
	{
		putchar((char)i);
		putchar(',');
		putchar(' ');
	}
	putchar((char)57);
	return (0);
}
