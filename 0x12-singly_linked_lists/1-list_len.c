#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * list_len - Finds the number of nodes in a list.
 * list_t: list
 * @h: Pointer to the head of the singly linked list.
 *
 * Return: Number of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
