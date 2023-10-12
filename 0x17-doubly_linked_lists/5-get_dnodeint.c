#include "lists.h"
/**
 * get_dnodeint_at_index - finds specific node
 * @head: head of dlist
 * @index: node number to find
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int tracker = 0;

	while (head)
	{
		if (tracker == index)
			return (head);
		tracker += 1;
		head = head->next;
	}
	return (NULL);
}
