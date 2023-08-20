#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - getting number of nodes
 * @h: a head to the first node
 *
 * Return: returns number of nodes printed
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (num);

	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num);
}
