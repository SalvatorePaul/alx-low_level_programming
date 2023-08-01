#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head of the list
 * Return: the head node's data (n), or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return (0);

	listint_t *tmp;
	int n;

	tmp = *head;
	n = tmp->n;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
