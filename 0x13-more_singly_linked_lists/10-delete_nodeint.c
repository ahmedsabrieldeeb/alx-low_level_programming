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
	unsigned int i = 0;
	listint_t *temp, *ptr, *now;

	if (head == NULL || *head == NULL)
		return (-1);

	if (idx == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	ptr = *head;
	now = (*head)->next;
	for (i = 1; now != NULL && i < idx; i++)
	{
		ptr = now;
		now = now->next;
	}

	if (now == NULL)
		return (-1);

	ptr->next = now->next;
	free(now);
	return (1);
}
