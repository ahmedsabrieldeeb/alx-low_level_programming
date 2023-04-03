#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - a function that returns the sum of all
 * the data (n) of a listint_t linked list.
 * @head: a pointer to the first node
 *
 * Return: the sum, or 0 if it is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
