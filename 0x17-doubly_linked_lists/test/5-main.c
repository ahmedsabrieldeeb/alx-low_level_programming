#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;
	dlistint_t *node;

	head = NULL;
	print_dlistint(head);
	node = get_dnodeint_at_index(head, 5);
	printf("%p\n", (void *)node);
	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
}
