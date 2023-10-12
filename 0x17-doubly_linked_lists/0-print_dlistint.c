#include "lists.h"
/**
 * print_dlistint - prints a doubly linked list
 * @h: head of doubly linked list
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t val = 0;

	while (h)
	{
		printf("%d\n", h->n);
		val += 1;
		h = h->next;
	}
	return (val);
}
