#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - the entry point
 * @argc: the number of inputs
 * @argv: array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	i = get_op_func(op)(num1, num2);
	printf("%d\n", i);

	return (0);
}
