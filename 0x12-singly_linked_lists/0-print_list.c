#include "lists.h"

/**
 * print_list: function takes a pointer to the head of the linked list
 * list_t: elements of the lists to be printed
 * @h: head of the linked list
 * Return: the number of nodes
 *
 * Description: singly linked list node structure
 */
size_t print_list(const list_t *h)
{
	size_t count = 1;
	
	while (h != NULL)
	{
	if (h->str == NULL)
		printf("[0] (nil)");
	else
	{
		printf("[%d] %s\n", h->len, h->str);
	}
	count++;
	printf("[%d] %s\n", h->len, h->str);

	}
	return (count);
}
