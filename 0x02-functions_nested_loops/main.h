#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_alphabet - the entry point
 *
 * Description: a program that prints the alphabet in lowercase,
 * followed by a new line.
 *
 * Return: return nothing "void"
 */
void print_alphabet(void)
{
	char alph[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(ahph[i]);
	}
	putchar('\n');
	return;
}
