#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: a pointer to  the first node
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *ptr;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		ptr = head;
		free(ptr->str);
		head = head->next;
		free(ptr);
	}
}
