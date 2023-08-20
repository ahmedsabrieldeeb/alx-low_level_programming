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
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *temp;
	unsigned int order = 0;

	if (new_node ==  NULL)
		return (NULL);

	new_node->n = n;
	temp = *h;

	/* case if empty list and idx is 0 */
	if (temp == NULL && idx == order)
	{
		*h = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
		return (new_node);
	}

	/* Traverse searching for index */
	while (temp != NULL)
	{
		if (order == idx)
		{
			temp->next->next->prev = new_node;
			new_node->next = temp->next->next;
			new_node->prev = temp;
			temp->next = new_node;
			return (new_node);
		}
		order++;
		temp = temp->next;
	}

	/* idx is invalid */
	free(new_node);
	return (NULL);
}
