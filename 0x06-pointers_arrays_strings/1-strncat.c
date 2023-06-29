#include "main.h"
#include <stdio.h>

/**
 * _strncat - a function that concatenates two strings.
 * @dest: the function the src string is appended to
 * @src: src string
 * @n: n bytes from src
 * Return: a pointer to the resulting string dest
 */

char* _strncat(char* dest, char* src, int n)
{
	char* ptr = dest;
	
	while (*ptr != '\0')
	{
		ptr++;
	}
	while (n > 0 && *src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	*ptr = '\0';
	return (dest);
}
