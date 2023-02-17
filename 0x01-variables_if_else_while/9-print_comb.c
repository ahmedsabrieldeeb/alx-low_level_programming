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
	char comb[] = "0, 1, 2, 3, 4, 5, 6, 7, 8, 9";
	int i;

	for (i = 0; i < 28; i++)
	{
		putchar(comb[i]);
	}
	putchar('\n');
	return (0);
}
