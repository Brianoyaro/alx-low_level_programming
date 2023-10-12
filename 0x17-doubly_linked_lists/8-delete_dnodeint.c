#include "lists.h"
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int tracker = 0;
	dlistint_t *curr;

	curr = *head;
	if (index == 0 && (curr != NULL))
	{
		*head = curr->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(curr);
		return (1);
	}
	while (curr)
	{
		if (tracker == index)
		{
			curr->prev->next = curr->next;
			if (curr->next != NULL)
				curr->next->prev = curr->prev;
			free(curr);
			return (1);
		}
		tracker += 1;
		curr = curr->next;
	}
	return (-1);
}
