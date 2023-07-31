#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a specific index
 * @head: headnode of listint_t list
 * @index: index node to delete
 * Return: 1 on success
 * -1 on error
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int value = 1;
	listint_t *temp, *current;

	if (*head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		temp = current;
		current = current->next;
		*head = current;
		free(temp);
		return (1);
	}
	while (current)
	{
		if (value == index)
		{
			temp = current->next;
			current->next = current->next->next;
			free(temp);
			return (1);
		}
		value++;
		current = current->next;
	}
	return (-1);
}
