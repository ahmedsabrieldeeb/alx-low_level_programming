#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: the hash table pointer
 * @key: the key
 * @value: the value
 *
 * Return: 1 on Success, 0 on failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash, index;
	hash_node_t *new_node, *temp_ptr;

	/* check validity of input args */
	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	/* run the hash function on the key */
	hash = hash_djb2((const unsigned char *)key);
	index = hash % ht->size;

	/* prepare the new key:pair value to add */
	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	/* fill the node with data */
	new_node->key = (char *)key;
	new_node->value = strdup(value);
	new_node->next = NULL;

	/* handle collision */
	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		temp_ptr = ht->array[index];
		while (1)
		{
			if (temp_ptr->next == NULL)
			{
				temp_ptr->next = new_node;
				break;
			}
			temp_ptr = temp_ptr->next;
		}
	}
	return (1);
}
