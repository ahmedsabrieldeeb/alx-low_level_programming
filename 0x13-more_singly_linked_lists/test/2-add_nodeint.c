#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - a function that adds a new node
 * at the beginning of a listint_t list.
 * @head: a double pointet to that node
 * @n: data to be loaded into the new node
 *
 * Return: address of the new node, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
