#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Free a linkedlist
 *
 * @head: A ptr to the first element of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
