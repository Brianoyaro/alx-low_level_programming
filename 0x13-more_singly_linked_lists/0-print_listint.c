#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints elements of listint_t list
 * @h: head node of listint_t list
 * Return: number of elements in listint_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
