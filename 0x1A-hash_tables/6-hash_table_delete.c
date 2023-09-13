#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: the hash table pointer
 *
 * Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int count;

	for (count = 0; count < ht->size; count++)
	{
		if (ht->array[count] == NULL)
			continue;

		while (ht->array[count] != NULL)
		{
			node = ht->array[count];
			ht->array[count] = ht->array[count]->next;
			free(node->key);
			free(node->value);
			free(node);
		}
	}
	free(ht->array);
	free(ht);
}
