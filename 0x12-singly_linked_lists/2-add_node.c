#include "lists.h"
#include <string.h>

/**
 * add_node - adds a node at the beggining of a list
 *
 * @head: first node
 * @str: data to add in the node
 * 
 * Return: address of the new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = 5;
	node->next = *head;

	return (node);
}
