#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table.
 * @ht: the hash table pointer
 *
 * Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	int first_element;
	unsigned long int size, count;
	hash_node_t *node;

	if (ht == NULL)
		return;

	size = ht->size;
	printf("{");
	first_element = 1;
	for (count = 0; count < size; count++)
	{
		if (ht->array[count] == NULL)
			continue;

		if (first_element == 1)
		{
			printf("'%s': '%s'", ht->array[count]->key, ht->array[count]->value);
			first_element = 0;
		}

		node = ht->array[count];
		while (node != NULL)
		{
			printf(", '%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
