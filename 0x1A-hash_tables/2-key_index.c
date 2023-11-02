#include "hash_tables.h"
/**
 * key_index - finds index position of a key
 * @key: key to find index
 * @size: size of hash table
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value;

	value = hash_djb2(key);
	return (value % size);
}
