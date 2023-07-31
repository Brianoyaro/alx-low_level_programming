#include "lists.h"

/**
 * listint_len - returns number of elements in listint_t list
 * @h: head node of listint_t list
 * Return: count of elements in listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
