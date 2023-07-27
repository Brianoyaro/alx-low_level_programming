#include "lists.h"
/**
 * list_len - finds number of nodes
 * @h: head node
 * Return: number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	for (; h != NULL; h = h->next)
		++len;
	return (len);
}
