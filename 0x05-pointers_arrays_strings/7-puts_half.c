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
 * puts_half - a function that prints half of a string,
 * followed by a new line.
 * @str: the string to be dealt with
 *
 * Return: void
 */

void puts_half(char *str)
{
	int n;

	n = ((_strlen(str)) - 1) / 2;

	while (*(str + n) != '\0')
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
}
