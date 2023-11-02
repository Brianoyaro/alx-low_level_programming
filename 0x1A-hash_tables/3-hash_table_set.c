#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *temp;
	long unsigned int index;

	if (key == NULL || value == NULL)/*empty key*/
		return (0);
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	index = key_index((const unsigned char *)key, ht->size);
	while (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, new->key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = new->value;
			return (1);
		}
		ht->array[index] = ht->array[index]->next;
	}
	temp = ht->array[index];
	new->next = temp;
	ht->array[index] = new;
	return (1);
}
