#include <stdio.h>

/**
 * is_prime - function name
 * @n: the positive integer number to be tested
 *
 * Description: finds whether the given pos int number
 * is prime or not
 *
 * Return: 1 if true, 0 if false
 */
int is_prime(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		int i;

		for (i = 2; i < (n / 2); i++)
		{
			if ((n % i) == 0)
			{
				return (0);
			}
		}
		return (1);
	}
}
/**
 * main - entry point
 *
 * Description: a program that finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line.
 *
 * Return: 0 On success
 */
int main(void)
{
	long n = 612852475143;
	long largest = 0;
	long i, d;

	d = n;

	for (i = 2; i <= d; i++)
	{
		if (is_prime(i))
		{
			if (n % i == 0)
			{
				largest = i;
				d = d / i;
			}
		}
	}
	printf("%ld", largest);
	printf("\n");
	return (0);
}
