#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - printing content of list
 * @h: a head to the first node
 *
 * Return: returns number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (num);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
