#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node, starting at 0
 * Return: the nth node of a listint_t linked list, or NULL if the node does
 * not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int current_index = 0;

	while (head != NULL)
	{
		if (current_index == index)
	{
		return (head);
	}
		head = head->next;
		current_index++;
	}
	return (NULL);
}
