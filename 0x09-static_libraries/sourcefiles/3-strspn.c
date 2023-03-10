#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: initial segmesnt of string s
 * @accept: the bytes container
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int j;
	unsigned int len = 0;
	int i = 0;

	while ((*(s + i) >= 97 && *(s + i) <= 122)
			|| (*(s + i) >= 65 && *(s + i) <= 90))
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				len++;
				break;
			}
			j++;
		}
		i++;
	}
	return (len);
}
