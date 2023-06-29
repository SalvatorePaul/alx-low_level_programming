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
	int index, indexSrc;

	for (index = 0; dest[index]; index++)
		;
	for (indexSrc = 0; src[indexSrc]; indexSrc++, index++)
	{
		dest[index] = src[indexSrc];
	}
	dest[index] = '\0';
	return (dest);
}
