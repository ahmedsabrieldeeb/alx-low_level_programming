#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the entry point
 *
 * Description: our main function here will
 * will assign a random number to the variable n
 * each time it is executed and print whether
 * the number stored in the variable n is positive or negative.
 *
 * Return: returns zero once completion successfully
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		printf("%d is zero", n);
	}
	else if (n > 0)
	{
		printf("%d is positive", n);
	}
	else
	{
		printf("%d is negative", n);
	}

	return (0);
}
