#include "main.h"
/**
 * _strcmp - a function that compares two strings.
 * @s1: the first string
 * @s2: the second string to be compared to s1
 *
 * Return: if s1 < s2  --> -ve vlaue
 *		   if s1 == s2 --> zero
 *		   if s1 > s2  --> +ve value
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*(s1 + i) != '\0')
	{
		if (*(s1 + i) == *(s2 + i))
		{
			i++;
		}
		else
			break;
	}
	if (*(s1 + i) == *(s2 + i))
		return (0);
	else
		return ((int)(*(s1 + i)) - (int)(*(s2 + i)));
}
