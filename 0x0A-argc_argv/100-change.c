#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * cal_result - the actual function
 * @x: the money
 * @i: index of values of coins
 *
 * Return: the minimum number of coins
 */

int cal_result(int x, int i)
{
	int arr[5] = {25, 10, 5, 2, 1};

	if (x % arr[i] == 0)
	{
		return (x / arr[i]);
	}
	else
	{
		if (x / arr[i])
		{
			int sum = x / arr[i];
			int new_x = x - (arr[i] * sum);

			i++;
			return (sum + cal_result(new_x, i));
		}
		else
		{
			i++;
			return (cal_result(x, i));
		}
	}
}

/**
 * main - the entry point
 * @argc: the arguments count
 * @argv: an array of arguments
 *
 * Description: a program that prints the minimum number
 * of coins to make change for an amount of money.
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int num = atoi(argv[1]);

		if (num <= 0)
		{
			printf("0\n");
			return (0);
		}
		else
		{
			int res = cal_result(num, 0);

			printf("%d\n", res);
			return (0);
		}
	}
}
