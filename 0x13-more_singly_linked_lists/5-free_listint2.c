#include "lists.h"

/**
 * free_listint2 - sets the head to NULL
 *
 * @head: head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *nnode, *cnode;

	cnode = *head;

	while (cnode)
	{
		nnode = cnode->next;
		free(cnode);
		cnode = nnode;
	}
	*head = NULL;
}
