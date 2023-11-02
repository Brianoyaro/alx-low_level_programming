#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *curr;
	unsigned long int i = 0;

	for (; i < ht->size; i++)
	{
		temp = ht->array[i];
		if (temp)
		{
			while (temp)
			{
				curr = temp->next;
				free(temp->key);
				free(temp->value);
				free(temp);
				temp = curr;
			}
		}
		else
			free(temp);
	}
	free(ht->array);
	free(ht);
}
