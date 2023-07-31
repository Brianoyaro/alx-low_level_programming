#include "lists.h"

/**
 * get_nodeint_at_index - gets nth node of a listint_t list
 * @head: head node of listint_t list
 * @index: specific index to return
 * Return: nth index of listint_t list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int value = 0;

	while (head)
	{
		if (value == index)
			return (head);
		value++;
		head = head->next;
	}
	return (NULL);
}
