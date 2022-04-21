#include "lists.h"

/**
 * free_list - frees a node
 *
 */

void free_list(list_t *head)
{
	list_t *node = head;

	free(node->str);
	free(node);
}
