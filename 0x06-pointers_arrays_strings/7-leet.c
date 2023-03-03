#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @s: the string to be worked on
 *
 * Description: Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 *
 * Return: char pointer
 */

char *leet(char *s)
{
	int i, j;
	int arr[15] = {97, 65, 52, 101, 69, 51, 108, 76, 49, 111, 79, 48
		, 116, 84, 55};

	i = 0;
	while (*(s + i) != '\0')
	{
		j = 0;
		while (j < 15)
		{
			if ((*(s + i) == *(arr + j)) || (*(s + i) == *(arr + j + 1)))
			{
				*(s + i) = *(arr + j + 2);
				break;
			}
			else
			{
				j += 3;
			}
		}
		i++;
	}
	return (s);
}
