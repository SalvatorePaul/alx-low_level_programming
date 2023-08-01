#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data to be added to the new node
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *previous;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		/*Failed to allocate memory*/
		return (NULL);
	}
	new_node->n = n;
	/*Assign data to the new node*/
	if (idx == 0)
	{
		/*If the new node should be added at the beginning (index 0)*/
		new_node->next = *head;
		/*Update the head pointer to the new node*/
		*head = new_node;
		/*Return the address of the new element (new node)*/
		return (new_node);
	}
	/*Find the node at the position before the desired index*/
	previous = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (previous == NULL)
		{
			/*If the index is out of range, free the new node and return NULL*/
			free(new_node);
			return (NULL);
		}
		previous = previous->next;
	}
	/*Link the new node to the next node after the desired index*/
	new_node->next = previous->next;
	previous->next = new_node;
	/*Return the address of the new element (new node)*/
	return (new_node);
}
