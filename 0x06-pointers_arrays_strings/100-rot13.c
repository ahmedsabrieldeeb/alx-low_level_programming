#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * @s: the string to be encoded.
 *
 * Description: a simple encryption algorithm that replaces
 * each letter in a message with the letter 13 positions
 * ahead of it in the alphabet
 *
 * Return: the string after rotating.
 */

char *rot13(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if ((*(s + i) >= 97 && *(s + i) <= 109)
			|| (*(s + i) >= 65 && *(s + i) <= 77))
		{
			*(s + i) += 13;
		}
		else if ((*(s + i) > 109 && *(s + i) <= 122)
			|| (*(s + i) > 78 && *(s + i) <= 90))
		{
			*(s + i) -= 13;
		}
		i++;
	}
	return (s);
}
