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
	int i;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	i = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", i);

	return (0);
}
