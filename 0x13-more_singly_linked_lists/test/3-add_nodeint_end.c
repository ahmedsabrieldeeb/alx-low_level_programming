#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - a function that adds a new node
 * at the end of a listint_t list.
 * @head: a double pointet to that node
 * @n: data to be loaded into the new node
 *
 * Return: address of the new list, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		listint_t *ptr = *head;

		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = new;
	}
	return (*head);
}
