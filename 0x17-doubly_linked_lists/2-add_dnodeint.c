#include "lists.h"
/**
 * add_dnodeint - adds new node at beggining
 * @head: head of the dlist
 * @n: value of new node
 * Return: address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
		*head = new;
	}
	else
	{
		curr = *head;
		new->prev = curr->prev;
		new->next = curr;
		curr->prev = new;
		*head = new;
	}
	return (new);
}
