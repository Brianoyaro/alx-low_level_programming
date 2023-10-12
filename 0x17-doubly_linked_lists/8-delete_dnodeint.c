#include "lists.h"
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int tracker = 0;
	dlistint_t *curr;

	if (*head == NULL)
		return (1);
	curr = *head;
	if (index == 0)
	{
		if (curr->next != NULL)
		{
			curr->next->prev = curr->prev;
			*head = curr->next;
		}
		if (curr->next == NULL)
		{
			/*free(curr);*/
			*head = NULL;
		}
		return (1);
	}
	while (curr)
	{
		if (tracker == index)
		{
			curr->prev->next = curr->next;
			curr->next->prev = curr->prev;
			return (1);
		}
		tracker += 1;
		curr = curr->next;
	}
	return (-1);
}
