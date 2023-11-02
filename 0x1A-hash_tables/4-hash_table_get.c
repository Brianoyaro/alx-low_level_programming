#include "hash_tables.h"
/**
 * hash_table _get - retrieves a value associated with a key
 * @ht: hash table to look up
 * @key: key being looked up
 * Return: value associated with @key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	long unsigned int index;
	hash_node_t *temp;

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	if (temp == NULL || key == NULL)
		return (NULL);
	else
	{
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
				return (temp->value);
			temp = temp->next;
		}
	}
	return (NULL);
}
