#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the beginning of
 * a list_t list
 * @head: a double pointer to  the first node
 * @str: the content of the data to be added to the linked list
 *
 * Return: the address of the new element (start of the list), NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		list_t *ptr = *head;

		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = new;
	}

	free(new->str);
	return (*head);
}
