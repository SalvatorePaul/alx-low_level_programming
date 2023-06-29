#include "main.h"
#include <stdio.h>
/**
 * _strncpy - a function that copies two strings.
 * @dest: the function the src string is appended to
 * @src: src string
 * @n: n bytes from src
 * Return: a pointer to the resulting string dest
 */

char* _strncpy(char* dest, char* src, int n)
{
	char* ptr = dest;
	int i;
	
	for (i = 0; i < n && *src != '\0'; i++)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	for (; i < n; i++)
	{
		*ptr = '\0';
		ptr++;
	}
	return (dest);
}
