#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - a function that frees a listint_t list.
 * @head: a header to the first node of that list
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
		ptr = head;
	}
}
