#include "lists.h"

/**
 * pop_listint - deletes headnode of listint_t
 * list and returns the value of the head nodes data
 * @head: head node of listint_t
 * Return: deleted headnode data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (*head == NULL)
		return (0);
	temp = *head;
	value = temp->n;
	*head = (*head)->next;
	free(temp);
	return (value);
}
