#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: the node passed
 * Return: num of nodes
 */

size_t print_list(const list_t *h)
{
	int i = 0, len = 0;
	char *s;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			s = "(nil)";
		}
		else
		{
			s = h->str;
			len = h->len;
		}

		printf("[%u] %s\n", len, s);
		i++;
		h = h->next;
	}

	return (i);
}
