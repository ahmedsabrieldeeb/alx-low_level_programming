#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the entry point
 *
 * Description: prints all single digit numbers of base 10
 * starting from 0 using putchar, followed by a new line.
 *
 * Return: returns zero once completion successfully
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)	/*using an ascii codes*/
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
