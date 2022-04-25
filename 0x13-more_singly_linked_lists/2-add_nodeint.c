#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beggining
 *
 * @head: head of the list
 * @n: data
 * Return: pointer to the new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
