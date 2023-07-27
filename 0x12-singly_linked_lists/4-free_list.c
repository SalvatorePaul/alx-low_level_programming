#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_list - a function that frees a list_t list.
 * list_t: list
 * @head: Pointer to the beginning of the linked list.
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	
	/* Recursively free the rest of the list from the current node */
	free_list(head->next);
	
	free(head->str);
	
	/* Free the current node itself */
	free(head);
}
