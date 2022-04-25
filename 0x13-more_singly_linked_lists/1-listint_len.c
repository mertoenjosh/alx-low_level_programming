#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 *
 * @h: node
 * Return: number of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
