#include "lists.h"

/**
 * sum_listint - finds sum of all data nodes in a listint_t list
 * @head: headnnode of listint_t list
 * Return: sum of all data nodes
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	int value;

	if (head == NULL)
		return (0);
	while (head)
	{
		value = head->n;
		sum += value;
		head = head->next;
	}
	return (sum);
}
