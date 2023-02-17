#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point
 *
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 *
 * Return: returns zero once completion successfully
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	return (0);
}
