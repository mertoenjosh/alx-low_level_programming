#include "lists.h"

/**
 * sum_listint - sums data of all linked lists
 *
 * @head: pointer to list head
 * Return: sum or 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = *head;

	if (!node)
		return (0);

	while (node->next != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
