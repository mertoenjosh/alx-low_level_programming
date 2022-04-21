#include "lists.h"

/**
 * list_len - returns number os els in a linked list
 *
 * @h: node
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
