#include "lists.h"
/**
 * fre_list - frees a list
 * @head: first node of the list
 */
void free_list(list_t *head)
{
	list_t *temp;
	list_t *current;

	current = head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;/*move next nefore freein*/
		free(temp->str);/*because it was mallocated in the heap*/
		free(temp);
	}
	head = NULL;
}
