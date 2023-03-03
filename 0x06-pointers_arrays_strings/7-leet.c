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
	char arr[15] = {'A', 'a', '4', 'e', 'E', '3', 'o', 'O', '0', 't', 'T', '7',
	'l', 'L', '1'};

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
			j += 3;
		}
		i++;
	}
	return (s);
}
