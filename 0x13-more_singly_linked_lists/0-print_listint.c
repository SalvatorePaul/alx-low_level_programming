#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that prints all list
 * @h: head of singly linked list
 * Return: the number of nodes in the linked list
 *
 * Description: singly linked list node structure
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		Count++;
	}
	return (count);
}
