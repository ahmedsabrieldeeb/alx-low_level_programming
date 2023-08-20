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
    dlistint_t *head, *p;

    head = NULL;
	add_dnodeint_end(&head, 65);
	add_dnodeint(&head, 50);
    print_dlistint(head);
    printf("-----------------\n");
	printf("%p\n", (void *)p);
	print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
