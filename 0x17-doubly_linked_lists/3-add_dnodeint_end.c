#include "lists.h"
/**
 * add_dnodeint_end - add node at end of dlist
 * @head: head of dlist
 * @n: value of new node to add
 * Return: address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *curr;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->next = *head;
		new->prev = NULL;
		*head = new;/*it is the first node*/
	}
	else
	{
		curr = *head;
		while (curr->next)
			curr = curr->next;
		new->next = curr->next;
		new->prev = curr;
		curr->next = new;
	}
	return (new);
}
