#include "lists.h"

/**
 * free_listint2 - sets the head to NULL
 *
 * @head: head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *node;
	listint_t *temp;

	node = *head;

	while (node != NULL && head != NULL)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	*head = NULL;
}
