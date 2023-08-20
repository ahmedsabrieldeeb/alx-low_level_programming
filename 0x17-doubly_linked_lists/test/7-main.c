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
    print_dlistint(head);
    printf("-----------------\n");
    p = insert_dnodeint_at_index(&head, 0, 4096);
	printf("%p\n", (void *)p);
	print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
