#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * list_node - Definition of the list node structure
 */
typedef struct list_node
{
	char *str;
	struct list_node *next;
}
list_t;

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
	const list_t *current = h;
	size_t count = 0;

	printf("[");
	while (current != NULL)
	{
		if (current->str != NULL)
		printf("%s", current->str);
	}
	else
	{
		printf("(nil)");
	}
	current = current->next;
	count++;
	
	if (current != NULL)
	{
		printf(", ");
	}
	printf("]\n");
	
	return count;
}
