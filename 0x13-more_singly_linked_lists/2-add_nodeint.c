#include "lists.h"

/**
 * add_nodeint - adds a node at the beggining of listint_t list
 * @head: head node of listint_t list
 * @n: value os node to add
 * Return: address of added element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current;

	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);
	current->n = n;
	current->next = *head;
	*head = current;
	return (current);
}
