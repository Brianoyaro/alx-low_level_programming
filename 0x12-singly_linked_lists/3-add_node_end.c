#include "lists.h"
#include <string.h>
/**
 * _strlen - finds length of a string
 * @str: string to find length
 * Return: length of str
 */
int _strlen(const char *str)
{
	int len = 0;

	while (*str)
	{
		++len;
		++str;
	}
	return (len);
}
/**
 * add_node_end - adds a node at end of list
 * @head: first node of list
 * @str: string value part of node to cpy
 * Return: pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	for (current = *head; current->next != NULL; current = current->next)
		;
	current->next = new_node;

	return (new_node);
}
