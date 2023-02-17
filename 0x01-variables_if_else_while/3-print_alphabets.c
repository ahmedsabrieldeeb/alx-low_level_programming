#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

/**
 * main - the entry point
 *
 * Description: prints the alphabet in lowercase, and then in uppercase,
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
		putchar(alph[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(toupper(alph[i]));
	}
	putchar('\n');
	return (0);
}
