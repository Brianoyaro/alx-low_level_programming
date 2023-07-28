#include "lists.h"
#include <string.h>
#include <stdlib.h>
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
 * add_node - adds a node at the beginning
 * @head: first node of the list
 * @str: string to copy to sttring part of node created
 * Return: addreee of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
