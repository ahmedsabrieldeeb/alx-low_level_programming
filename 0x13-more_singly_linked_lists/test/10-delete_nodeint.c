#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes a new node
 * at a given position.
 * @head: a double pointer to the first node
 * @idx: index of the list where the new node should be added.Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	unsigned int len = listint_len(*head);
	unsigned int counter = 0;
	listint_t *ptr = *head;
	
	if (idx >= len)
		return (-1);
	
	while (counter != (idx - 1))
	{
		ptr = ptr->next;
		counter++;
	}

	
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
