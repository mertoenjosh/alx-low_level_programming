#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add a node at the end of a list
 *
 * @head: head of the list
 * @n: data to add
 * Return: address of added node or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *end;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	if (*head == NULL)
		*head = new;
	else
	{
		end = *head;
		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = new;
	}
	return (new);
}
