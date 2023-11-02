#include "hash_tables.h"
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *curr;
	unsigned long int i = 0;

	for (; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			curr = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = curr;
		}
	}
	free(ht->array);
	free(ht);
}
