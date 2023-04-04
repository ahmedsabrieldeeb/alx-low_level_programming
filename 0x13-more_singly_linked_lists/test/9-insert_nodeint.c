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
	unsigned int i;
	listint_t *ptr, *new;

	if (head == NULL)
		return (NULL);

	if (idx == 0 || *head == NULL)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}

	ptr = *head;
	for (i = 0; i < idx - 1 && ptr != NULL; i++)
		ptr = ptr->next;

	if (ptr == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = ptr->next;
	ptr->next = new;
	return (new);
}
