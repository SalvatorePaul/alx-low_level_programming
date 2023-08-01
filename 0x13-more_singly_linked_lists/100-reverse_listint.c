#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	/* Declare variables to keep track of previous and current nodes */
	listint_t *previous = NULL;
	listint_t *current = NULL;

	while (*head != NULL)
	{
		current = (*head)->next;
		(*head)->next = previous;
		previous = *head;
	}
	*head = previous;
	return (*head);
}
