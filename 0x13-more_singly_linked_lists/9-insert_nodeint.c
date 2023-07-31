#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a give position
 * @head: headnode of listint_t list
 * @idx: index to insert new node
 * @n: data value of added node
 * Return: addree of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int value = 1;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = (*head)->next;
		*head = new_node;
	}
	current = *head;
	while (current)
	{
		if (idx == value)
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		value++;
		current = current->next;
	}
	return (NULL);
}
