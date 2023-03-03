#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: the string to be applied on
 *
 * Description: Separators of words:
 * space - tabulation - new line - , - ; - . - ! - ? - " - ( - ) - { - }
 *
 * Return: a char pointer
 */

char *cap_string(char *s)
{
	int i;

	i = 1;

	if ((*s >= 97) && (*s <= 122))
		*(s) = *(s) - 32;

	while (*(s + i) != '\0')
	{
		if ((*(s + i - 1) == 32) || (*(s + i - 1) == 9)
			|| (*(s + i - 1) == 44) || (*(s + i - 1) == 59)
			|| (*(s + i - 1) == 46) || (*(s + i - 1) == 33)
			|| (*(s + i - 1) == 63) || (*(s + i - 1) == 34)
			|| (*(s + i - 1) == 40) || (*(s + i - 1) == 41)
			|| (*(s + i - 1) == 123) || (*(s + i - 1) == 125)
			|| (*(s + i - 1) == 10))
		{
			if ((*(s + i) >= 97) && (*(s + i) <= 122))
			{
				*(s + i) = *(s + i) - 32;
				i++;
			}
			else
			{
				i++;
				continue;
			}
		}
		else
		{
			i++;
			continue;
		}
	}
	return (s);
}
