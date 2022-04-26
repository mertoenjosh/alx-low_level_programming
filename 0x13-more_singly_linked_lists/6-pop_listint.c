#include "lists.h"

/**
 * pop_listint - remove the first node from a list
 *
 * @head: a pointer to the head
 * Return: 0 or data of the head
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *node = *head;

	if (!node)
		return (0);
	*head = (*head)->next;
	i = node->n;
	free(node);
	return (i);
}
