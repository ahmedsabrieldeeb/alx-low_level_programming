#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;
	int k;

	printf("%ld\n", sizeof(unsigned long int));
    n = 1024;
    k = set_bit(NULL, 0);
    printf("%lu %d\n", n, k);
    n = 0;
    k = set_bit(&n, 544);
    printf("%lu %d\n", n, k);
    n = 98;
    k = set_bit(&n, 0);
    printf("%lu %d\n", n, k);
    return (0);
}
