#include "main.h"
#include <stdio.h>

/**
 * _strcat - a function that concatenates two strings.
 * @dest: the function the src string is appended to
 * @src: src string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int index, indexSrc;

	/*Find the size of dest array*/
	for (index = 0; dest[index]; index++)
		;

	/* Append each src character to dest */
	for (indexSrc = 0; src[indexSrc]; indexSrc++, index++)
	{
		dest[index] = src[indexSrc];
	}

	/* Add null terminator to the end of dest */
	dest[index] = '\0';

	return (dest);
}
