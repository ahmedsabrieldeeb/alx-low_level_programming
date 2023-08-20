#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint -  a function that returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: a pointer to the first node
 *
 * Return: returns sum of all nodes' contents, 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
