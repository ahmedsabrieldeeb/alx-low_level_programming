#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index -  a function that returns the nth node of
 * a dlistint_t linked list.
 * @head: a pointer to the first node
 * @index: index of the node
 *
 * Description: index starting from 0
 *
 * Return: returning a pointer to the node, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int order = 0;

	/* case of an empty list */
	if (head == NULL)
		return (NULL);

	/* Traverse searching for the node */
	while (head != NULL)
	{
		if (order == index)
			return (head);
		order++;
		head = head->next;
	}

	/* case if index is out of range */
	return (NULL);
}
