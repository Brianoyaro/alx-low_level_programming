#include "lists.h"
/**
 * sum_dlistint - finds sums of dlist values
 * @head: head of dlist
 * Return: sum of dlist values
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
