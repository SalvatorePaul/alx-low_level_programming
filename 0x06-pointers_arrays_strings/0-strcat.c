#include "main.h"
#include <stdio.h>

/**
 * _strcat - a function that concatenates two strings.
 * @dest: the function the src string is appended to
 * @src: src string
 * Return: a pointer to the resulting string dest
 */

char* _strcat(char* dest, char* src)
{
	char* ptr = dest;
	
	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
