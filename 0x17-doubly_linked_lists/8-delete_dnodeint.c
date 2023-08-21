#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes node
 * at a given position.
 * @head: a real pointer to the first node
 * @index: the index to be deleted from
 *
 * Description: where index is the index of the list
 * where the new node should be added. Index starts at 0
 *
 * Return: Returns: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int order = 0;

	if (head ==  NULL)
		return (-1);

	if (*head == NULL)
		return (-1);

	temp = *head;
	while (temp != NULL)
	{
		if (order == index)
		{
			if (index == 0)
			{
				*head = temp->next;
				free(temp);
				return (1);
			}
			else
			{
				temp->prev->next = temp->next;
				temp->next->prev = temp->prev;
				free(temp);
				return (1);
			}
		}
		order++;
		temp = temp->next;
	}
	if (index == order)
	{
		temp->prev->next = NULL;
		free(temp);
		return (1);
	}
	return (-1);
}
