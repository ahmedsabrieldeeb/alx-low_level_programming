#include "main.h"

/**
 * _atoi - main entry
 * @s: the string
 *
 * Return: 0 on success.
 */

int _atoi(char *s)
{
    int num, i;

    num = 0;
    i = 0;
    
    while (s[i] && (s[i] >= '0' && s[i] <= '9'))
    {
        num = num * 10 + (s[i] - '0');
        i++;
    }

    return (num);
}
