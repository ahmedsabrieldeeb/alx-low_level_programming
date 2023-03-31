#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: a head pointer to the first node
 *
 * Return: number of nodes, or <[0] (nil)> if str is NULL
 */

size_t print_list(const list_t *h)
{
	size_t number = 0;

	do {
			if (h->str != NULL)
			{
				printf("[%u] %s\n", h->len, h->str);
				number++;
				h = h->next;
			}
			else
			{
				printf("[0] (nil)\n");
				number++;
				h = h->next;
			}
		} while (h != NULL);

	return (number);
}
