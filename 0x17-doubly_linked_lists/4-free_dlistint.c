#include "lists.h"
/**
 * free_dlistint - frees a dlist
 * @head: head of dlist to free
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
	head = NULL;
}
