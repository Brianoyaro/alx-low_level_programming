#include "lists.h"
/**
 * fre_list - frees a list
 * @head: first node of the list
 */
void free_list(list_t *head)
{
	list_t *temp;
	list_t *current;

	for (current = head; current != NULL; current = current->next)
	{
		temp = current;
		free(temp);
	}
	*head = NULL;
}
