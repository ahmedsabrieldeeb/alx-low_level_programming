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
	int i, flag, k;

	i = 0;
	while (*(s + i) != '\0')
	{
		k = 1;

		if ((*(s + i) >= 97 && *(s + i) <= 109)
			|| (*(s + i) >= 65 && *(s + i) <= 77))
		{
			*(s + i) += 13;
			k = 0;
		}

		flag = 1;
		while (((*(s + i) > 109 && *(s + i) <= 122 && k)
			|| (*(s + i) > 78 && *(s + i) <= 90 && k)) && flag)
		{
			*(s + i) -= 13;
			flag = 0;
		}
		i++;
	}
	return (s);
}
