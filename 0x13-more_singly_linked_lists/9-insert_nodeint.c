#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at a given position
 *
 * @head: first node
 * @idx: index to insert node
 * @n: data for the node
 *
 * Return: pointer to inserted node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *node = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	i = 0;
	if (*head == NULL && idx > 0)
	{
		free(new);
		return (NULL);
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (i < idx - 0)
	{
		node = node->next;
		if (node == NULL && idx - i > 0)
		{
			free(new);
			return (NULL);
		}
		i++;
	}
	new->next = node->next;
	node->next = new;
	return (new);
}
