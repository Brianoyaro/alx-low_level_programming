#include "hash_tables.h"
/**
 * shash_table_create - creates a hash table
 * @size: size of hash table to create
 * Return: hash table created
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;
	unsigned long int i = 0;

	sht = malloc(sizeof(shash_table_t));
	if (!sht)
		return (NULL);
	sht->size = size;
	sht->shead = NULL;
	sht->stail = NULL;
	sht->array = malloc(sizeof(shash_node_t *) * size);
	for (; i < sht->size; i++)
		sht->array[i] = NULL;
	return (sht);
}
/**
 * shash_table_set - sets key and value in hash table
 * @ht: hash table
 * @key: key to set
 * @value: value of key
 * Return: 0 in error
 * 1 on success
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node;

	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	shash_sorting_fxn(new_node, ht);/*newnode->sprev, newnode->snext, ht->shead, ht->stail*/
	return (1);
}
/**
 * shash_sorting_fxn - sorts a linked list
 * @new_node: node to insert in list
 * @ht: hash table containing linked list
 * Return: Nothing
 */
void shash_sorting_fxn(shash_node_t *new_node, shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht->shead == NULL && ht->stail == NULL)
	{
		new_node->snext = NULL;
		new_node->sprev = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
		return;
	}
	else
	{
		if (strcmp(new_node->key, ht->shead->key) < 0)/*newnode should be shead*/
		{
			new_node->snext = ht->shead;
			new_node->sprev = ht->shead->sprev;
			ht->shead->sprev = new_node;
			ht->shead = new_node;
		}
		else if (strcmp(new_node->key, ht->stail->key) > 0)/*newnode should be stail*/
		{
			new_node->snext = NULL;
			new_node->sprev = ht->stail;
			ht->stail->snext = new_node;
			ht->stail = new_node;
		}
		else
		{
			temp = ht->shead;
			while (temp)/*newnode in between linked list*/
			{
				if (strcmp(new_node->key, temp->key) < 0)
				{
					new_node->snext = temp;
					new_node->sprev = temp->sprev;
					temp->sprev->snext = new_node;
					temp->sprev = new_node;
					return;
				}
				temp = temp->snext;
			}
		}
	}
}
/**
 * shash_table_print - prints a linked list
 * @ht: hash table containing linked list
 * Return: Nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
	int counter = 0;

	temp = ht->shead;
	printf("{");
	while (temp)
	{
		if (counter != 0)
			printf(", ");
		counter = 1;
		printf("'%s: %s'", temp->key, temp->value);
		temp = temp->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - prints a linked list in reverse
 * @ht: hast table containing linked list
 * Return: Nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	int counter = 0;

	temp = ht->stail;
	printf("{");
	while (temp)
	{
		if (counter != 0)
			printf(", ");
		counter = 1;
		printf("'%s: %s'", temp->key, temp->value);
		temp = temp->sprev;
	}
	printf("}\n");
}
/**
 * shash_table_delete - deletes a hash table
 * @ht: hash table to delete
 * Return: Nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *aux, *temp;

	for (; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			free(ht->array[i]);
		else
		{
			temp = ht->array[i];
			while (temp)
			{
				aux = temp->next;
				free(temp->key);
				free(temp->value);
				free(temp);
				temp = aux;
			}
		}
	}
	free(ht->array);
	free(ht);
}
/**
 * shash_table_get - gets a value from a hash table
 * @ht: hash table
 * @key: key whose value is returned
 * Return: value associated with key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp;

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	if (key == NULL || strcmp(key, "") == 0 || temp == NULL)
		return (NULL);
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return temp->value;
		temp = temp->next;
	}
	return (NULL);
}
