#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts a new node
 * at a given position.
 * @head: a double pointer to the first node
 * @idx: index of the list where the new node should be added.Index starts at 0
 * @n: the data to be added
 *
 * Return: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int len = listint_len(*head);
	unsigned int counter = 0;
	listint_t *ptr = *head;
	listint_t *new;

	if (idx >= len)
		return (NULL);

	while (counter != (idx - 1))
	{
		ptr = ptr->next;
		counter++;
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = ptr->next;
	ptr->next = new;

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
