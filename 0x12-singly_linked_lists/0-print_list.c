#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * size_t - size of t
 * print_list - function takes a pointer to the head of the linked list (h)
 * @list_t: elements of the lists to be printed
 * @h: head of the linked list
 * Return: the number of nodes
 *
 * Description: singly linked list node structure
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	
	while (h != NULL)
	{
	if (h->str == NULL)
		printf("[0] (nil)");
	
	else
	{
		printf("[%d] %s", h->len, h->str);
	}
	count++;
	h = h->next;
	}
	return (count);
}
