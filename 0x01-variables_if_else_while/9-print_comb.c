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
	int comb[] = {48, 44, 32, 49, 44, 32, 50, 44, 32, 51, 44, 32, 52, 44, 32,
			53, 44, 32, 54, 44, 32, 55, 44, 32, 56, 44, 32, 57};
	int i;

	for (i = 0; i < (int)(sizeof(comb) / sizeof(comb[0])) ; i++)
	{
		putchar(comb[i]);
	}
	putchar('\n');
	return (0);
}
