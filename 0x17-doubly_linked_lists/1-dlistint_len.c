#include "lists.h"
/**
 * dlistint_len - preints length of dobly linked list
 * @h: head node of doubly linked list
 * Return: number of nodes in the doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t val = 0;

	while (h)
	{
		val += 1;
		h = h->next;
	}
	return (val);
}
