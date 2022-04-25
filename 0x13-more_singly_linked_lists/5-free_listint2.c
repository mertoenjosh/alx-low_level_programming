#include "lists.h"

/**
 * free_listint2 - sets the head to NULL
 *
 * @head: head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	while (*head != NULL)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
	}
}
