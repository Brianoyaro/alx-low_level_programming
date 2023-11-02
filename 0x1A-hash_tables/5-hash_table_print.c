#include "hash_tables.h"
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	long unsigned int i = 0;

	printf("{");
	for (; i < ht->size; i++)
	{
		temp = ht->array[i];
		if (temp != NULL)
		{
			if (temp->next)
			{
				while (temp->next)
				{
					printf("'%s':'%s', ", temp->key, temp->value);
					temp = temp->next;
				}

			}
			printf("'%s':'%s'", temp->key, temp->value);/*print first element because the next require <,><space>*/
			break;
		}
	}
	for (; i < ht->size; i++)
	{
		temp = ht->array[i];
		if (temp)
		{
			if (temp->next)
			{
				while (temp->next)
				{
					printf("'%s':'%s', ", temp->key, temp->value);
					temp = temp->next;
				}
			}
			printf(" ,'%s':'%s'", temp->key, temp->value);
		}
	}
	printf("}\n");
}
