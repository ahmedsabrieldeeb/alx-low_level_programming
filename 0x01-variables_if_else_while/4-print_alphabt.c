#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point
 *
 * Description: prints the alphabet in lowercase except e and q,
 * followed by a new line.
 *
 * Return: returns zero once completion successfully
 */

int main(void)
{
	char alph[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (alph[i] == 'e' || alph[i] == 'q')
		{
			continue;
		}
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
