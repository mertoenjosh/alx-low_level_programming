#include "lists.h"

/**
 * delete_nodeint_at_index - delete at index
 *
 * @head: head of the list
 * @index: idex to delete
 * Return: 1 on success or -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node = *head;
	listint_t *temp;

	i = 0;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
	}
	else
	{
		while (i < index - 1)
		{
			node = node->next;
			if (node == NULL)
				return (-1);
			i++;
		}
		temp = node;
		temp = temp->next;
		node->next = temp->next;
		free(temp);
	}
	return (1);
}
