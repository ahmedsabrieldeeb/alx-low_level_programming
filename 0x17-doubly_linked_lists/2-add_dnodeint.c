#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adding a node at the beginning
 * @head: a pointer to head to the first node
 * @n: element to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->next = *head;
	new_node->n = n;
	new_node->prev = NULL;
	*head = new_node;

	return (*head);
}
