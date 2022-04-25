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
	int i = 0;

	if (node)
	{
		i = node->n;
		*head = node->next;
	}
	else
		i = 0;

	return (i);
}
