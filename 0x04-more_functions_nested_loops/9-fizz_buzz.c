#include <stdio.h>
/**
 * FizzBuzz - function name
 *
 * Description: a program that prints the numbers from 1 to 100,
 * followed by a new line. But for multiples of three print Fizz
 * instead of the number and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print
 * FizzBuzz.
 *
 * Return: void
 */

void FizzBuzz(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3) == 0)
		{
			if ((i % 5) == 0)
			{
				printf("FizzBuzz ");
			}
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			if ((i % 3) == 0)
			{
				printf("FizzBuzz ");
			}
			else
			{
				if (i == 100)
				{
					printf("Buzz");
				}
				else
				{
					printf("Buzz ");
				}
			}
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("%c", '\n');
}
