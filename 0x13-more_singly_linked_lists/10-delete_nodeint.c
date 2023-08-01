#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a
 * listint_t linked list
 * @head: double pointer to the head of the list
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous, *node_to_delete;
	unsigned int i;

	if (*head == NULL || *head == NULL)
	{
		/*If the list is empty, return -1 (failed)*/
		return (-1);
	}
	/*If the first node should be deleted*/
	if (index == 0)
	{
		/*Store the current head node in a temporary pointer*/
		listint_t *temp = *head;
		/*Move head to the next node (delete the current head)*/
		*head = (*head)->next;
		/*Free the memory of the original head node*/
		free(temp);
		/*Return 1 (succeeded)*/
		return (1);
	}
	/*Find the node at the position before the desired index*/
	previous = *head;
	for (i = 0; i < index - 1; i++)
	{
	if (previous == NULL || previous->next == NULL)
	{
	/*If the index is out of range, return -1 (failed)*/
	return (-1);
	}
	previous = previous->next;
	}
	/*Store the node to be deleted in a temporary pointer*/
	node_to_delete = previous->next;
	/*Link the previous node to the next node after the node to be deleted*/
	previous->next = node_to_delete->next;
	/*Free the memory of the node to be deleted*/
	free(node_to_delete);
	/*Return 1 (succeeded)*/
	return (1);
}
