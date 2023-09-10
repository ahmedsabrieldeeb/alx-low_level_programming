#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key.
 * @key: the key string
 * @size: the size of the array of the hash table
 *
 * Return: an index of the array
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
