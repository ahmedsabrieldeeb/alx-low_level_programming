#include <stdio.h>

/**
 * main - the entry point
 * @argc: the arguments count
 * @argv: an array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int x = argc;

	while (argc--)
	{
		printf("%s\n", argv[x - argc - 1]);
	}
	return (0);
}
