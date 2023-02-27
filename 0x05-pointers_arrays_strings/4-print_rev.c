#include "main.h"
/**
 * _strlen - a function that returns the length of a string.
 * @s: the string to be calculated for its length
 *
 * Return: int value contains the length
 */

int _strlen(char *s)
{
	int i, len;

	i = 0;
	len = 0;

	while (*(s + i) != '\0')
	{	len++;
		i++;
	}

	return (len);
}
/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: the string to be reversed
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int len;

	len = _strlen(s) - 1;

	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}
