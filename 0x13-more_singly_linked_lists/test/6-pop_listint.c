#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of
 * a listint_t linked list, and returns the head node’s data (n).
 * @head: a double pointer to the first node of that list
 *
 * Return: deleted node value or 0 if no nodes existed
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	ptr = *head;
	*head = (*head)->next;
	free(ptr);

	return (data);
}
