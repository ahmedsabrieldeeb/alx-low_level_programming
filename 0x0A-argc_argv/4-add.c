#include <stdio.h>
#include <stdlib.h>
/**
 * main - the entry point
 * @argc: the arguments count
 * @argv: an array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		int sum = 0;
		int i = 1;

		while (i < argc)
		{
			char *ptr;
			int num = strtol(argv[i], &ptr, 10);

			if (*ptr != '\0')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += num;
				i++;
			}
		}
		printf("%d\n", sum);
		return (0);
	}
}
