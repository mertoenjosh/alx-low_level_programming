#include "lists.h"

/**
 * free_listint2 - sets the head to NULL
 *
 * @head: head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *node = *head, node2, node3;

	while (node)
	{
		node2 = node->next;
		free(node);
		node = node2;
	}
	*head = NULL;
}
