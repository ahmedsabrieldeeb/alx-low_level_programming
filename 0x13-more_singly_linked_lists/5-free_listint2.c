#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: a double pointer to the first node of that list
 *
 * Description: The function sets the head to NULL
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
		ptr = *head;
	}
	*head = NULL;
}
