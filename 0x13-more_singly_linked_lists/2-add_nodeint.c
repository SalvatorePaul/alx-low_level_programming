#include "lists.h"
/**
 *add_nodeint - Adds a new node at the beginning
 *of a listint_t list
 *@head: A pointer to the address of the head of the listint_t list
 *@n: the integer for the new node to contain
 *
 *Return: NULL if function fails
 *Or address of element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
	/*Allocate memory for the new node*/
	if (new_node == NULL)
	{
		return (NULL);
	}
	/*Assign data to the new node*/
	new_node->n = n
	/*Update the next pointer of the new node to point to the current head*/
	new_node->next = *head;
	/*Update the head pointer to the new node making it the new head of the list*/
	*head = new_node;
	/*Return the address of the new element (new node)*/
	return (new_node);
}
