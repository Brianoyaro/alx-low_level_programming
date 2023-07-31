#include "lists.h"

/**
 * find_listint_loop - checks for a loop in our list
 * @head: head node of list to check
 * Return: node at which loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	slow = head;
	fast = head;
	while (slow && fast && fast->next)
	{
		slow = head->next;
		fast = head->next->next;
		if (slow == fast)
			return (slow);
	}
	return (NULL);
}
