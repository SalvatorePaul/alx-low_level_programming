#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the head of the list
 * Return: sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		/*Add the data (n) of the current node to the sum*/
		sum += head->n;
		/*Move to the next node*/
		head = head->next;
	}
	return (sum);
}
