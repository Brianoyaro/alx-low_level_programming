#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *temp;
	long unsigned int index;

	if (key == NULL)/*empty key*/
		return (0);
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);/*REQUIREMENTS WANT VALUE DUPLICATED*/
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	if (temp == NULL)
	{
		new->next = NULL;
		ht->array[index] = new;
	}
	else
	{
		new->next = temp;
		ht->array[index] = new;
	}
	return (1);
}
