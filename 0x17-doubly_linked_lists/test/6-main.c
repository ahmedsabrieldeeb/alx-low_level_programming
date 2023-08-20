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
	dlistint_t *head, *test;
	int sum, sum_test;

	head = test = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);
	sum = sum_dlistint(head);
	sum_test = sum_dlistint(test);
	printf("sum = %d\nsum_test = %d\n", sum, sum_test);
	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
}
