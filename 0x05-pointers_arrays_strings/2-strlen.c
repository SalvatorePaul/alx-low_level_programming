#include "main.h"
/**
 * _strlen - This function returns the length of a string
 * @s: string pointer
 * Return: length of string
*/

int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; s++)
	{
		length++;
	}
		return (length);
}
