#include "lists.h"

/**
 * get_nodeint_at_index - gets nth node
 *
 * @head: head of the list
 * @index: index to return
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node = head;

	if (!node)
		return (NULL);

	while (node->next != NULL)
	{
		if (index == i)
			return (node);
		i++;
		node = node->next;
	}
	return (NULL);
}
