#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint -  a function that frees a dlistint_t list.
 * @head: a pointer to the first node
 *
 * Return: returns nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	if (temp == NULL)
		return;

	while (head != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}

	free(temp);
}
