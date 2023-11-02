#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table to lookup
 *Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	long unsigned int i = 0, space_check = 0;

	printf("{");
	for (; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (space_check != 0 )
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			space_check = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
