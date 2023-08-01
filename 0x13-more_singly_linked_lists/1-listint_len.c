#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a listint_t list.
 *
 * @h: Pointer to the head of the singly linked list.
 *
 * Return: The number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;/*Initialize a variable to store the count*/

	/*Traverse the linked list*/
	while (h)
	{
		count++;/*Increment the count for each element in the list*/
		h = h->next;/*Move the pointer to the next node*/
	}
	return (count);/*Return the final count of elements in the list*/
}
