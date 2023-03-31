#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a
 * linked list_t list.
 * @h: a head pointer to the first node
 *
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		number++;
		h = h->next;
	}
	return (number);
}
