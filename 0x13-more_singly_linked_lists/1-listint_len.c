#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - a function that returns the number of elements
 * in a linked listint_t list.
 * @h: a header to the first node of that list
 *
 * Return: lenght of linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
