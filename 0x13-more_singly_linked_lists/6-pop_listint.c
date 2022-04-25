#include "lists.h"

/**
 * pop_listint - remove the first node from a list
 *
 * @head: a pointer to the head
 * Return: 0 or data of the head
 */

int pop_listint(listint_t **head)
{
	listint_t *node = *head;

	if (!node)
		return (0);
	if (node)
	{
		*head = node->next;
		node->next = NULL;
	}


	return (node->n);
}
