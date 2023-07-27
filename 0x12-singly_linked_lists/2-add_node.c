#include "lists.h"
#include <stdlib.h>
/**
 * _strlen - Gets the length of the string.
 * @s: Pointer to the input string.
 *
 * Return: Length of the string.
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;

	return (i);
}
/**
 * add_node - Adds new nodes to the beginning of the list.
 * @head: Pointer to the current place in the list.
 * @str: String to add to the head.
 *
 * Return: Pointer to the current position in the list (new head).
 */
list_t *add_node(list_t **head, const char *str)
{
	int i, len;
	char *content;
	list_t *new;

	if (str == NULL || head == NULL)
		return (NULL);

	len = _strlen(str);

	content = malloc((len + 1) * sizeof(char));
	if (content == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		content[i] = str[i];
	content[i] = '\0';

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(content);
		return (NULL);
	}

	/* Set the members of the new node structure */
	new->str = content;
	new->len = len;
	new->next = *head;

	/* Update the head pointer to point to the new node */
	*head = new;

	/* Return the new head of the linked list (current position in the list) */
	return (new);
}
