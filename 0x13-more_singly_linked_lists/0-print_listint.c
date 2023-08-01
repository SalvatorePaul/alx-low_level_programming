#include <stdio.h>
#include "lists.h"
/**
	* print_listint - prints all elements of a list_t list.
	*
	* @h: head of singly linked list to print
	*
	* Return: the number of nodes in the list
	*
	*/
size_t print_listint(const listint_t *h)
{
	size_t Count = 0;

	while (h)
	{
		printf("%d\n", h->n);

		h = h->next;

		Count++;
	}
	return (Count);
}
