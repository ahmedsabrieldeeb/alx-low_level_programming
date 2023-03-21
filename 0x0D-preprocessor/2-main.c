#include <stdio.h>

/**
 * main - entry point
 *
 * Description: printing the name of source code being compiled
 * using the predifend macro called "__FILE__"
 *
 * Return: 0 on success
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
