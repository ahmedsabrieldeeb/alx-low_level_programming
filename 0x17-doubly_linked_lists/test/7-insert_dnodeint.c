#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new node
 * at a given position.
 * @h: a real pointer to the first node
 * @idx: the index to be inserted at
 * @n: element to be added
 *
 * Description: where idx is the index of the list
 * where the new node should be added. Index starts at 0
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *temp;
	unsigned int order = 0;

	/* handle argument invalidity */
	if (h == NULL)
		return (NULL);

	temp = *h;

	/* case if empty list and idx is 0 */
	if (temp == NULL && idx == order)
		return (add_dnodeint(h, n));

	/* Traverse searching for index within the middle */
	while (temp != NULL)
	{
		/* case if inserting at the beginning*/
		if (idx == 0)
			return (add_dnodeint(h, n));
		if (order == idx)
		{
			new_node = malloc(sizeof(dlistint_t));
			new_node->n = n;
			temp->prev->next = new_node;
			new_node->prev = temp->prev;
			new_node->next = temp;
			temp->prev = new_node;
			return (new_node);
		}
		order++;
		temp = temp->next;
	}

	/* inserting at the end */
	if (idx == order)
		return (add_dnodeint_end(h, n));

	/* idx is invalid */
	return (new_node);
}
