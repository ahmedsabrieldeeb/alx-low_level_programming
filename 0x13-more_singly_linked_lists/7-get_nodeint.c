#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list.
 * @head: a pointer to the first node
 * @index: the index of the node, starting at 0
 *
 * Return: a pointer to the nth node, NULL if not existed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int len = listint_len(head);
	unsigned int counter = 0;
	listint_t *ptr = head;

	if (index >= len)
		return (NULL);

	while (counter != index)
	{
		ptr = ptr->next;
		counter++;
	}

	return (ptr);
}

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
