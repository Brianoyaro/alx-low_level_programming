#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts new node
 * @h: head of dlist
 * @idx: position to insert new node
 * @n: value of new node to add
 * Return: newlwy added node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int tracker = 0;
	dlistint_t *new, *curr;

	new =malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		if (new->next != NULL)
			new->next->prev = new;
		*h = new;
		return (new);
	}
	curr = *h;
	while (curr)
	{
		if (tracker == idx)
		{
			new->prev = curr->prev;
			curr->prev->next = new;
			new->next = curr;
			curr->prev = new;
			return (new);
		}
		tracker += 1;
		curr = curr->next;
	}
	return (NULL);
}
