#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point
 *
 * Description: prints all the numbers of base 16 in lowercase
 * starting from 0, followed by a new line.
 *
 * Return: returns zero once completion successfully
 */

int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		printf("%x", i);
	}
	printf("\n");
	return (0);
}
