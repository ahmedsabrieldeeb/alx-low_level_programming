#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the entry point
 *
 * Description: a program that prints the alphabet in lowercase,
 * followed by a new line.
 *
 * Return: returns zero once completion successfully
 */

int main(void)
{
	char alph[] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 26; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
