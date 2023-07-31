#include "lists.h"

/**
 * fre_listint - frees a listint_t list
 * @head: head node of listint_t
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	head = NULL;
}
