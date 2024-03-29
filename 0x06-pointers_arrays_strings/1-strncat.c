#include "main.h"
#include <stdio.h>

/**
 * _strncat - a function that concatenates two strings.
 * @dest: the function the src string is appended to
 * @src: src string
 * @n: n bytes from src
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int indexNum, indexSrc;

	indexNum = 0;

	/* Find size of dest array */
	while (dest[indexNum])
		indexNum++;

	/**
	 * src does not need to be null terminated
	 * if it contains n or more bytes
	 */
	for (indexSrc = 0; indexSrc < n && src[indexSrc] != '\0'; indexSrc++)
		dest[indexNum + indexSrc] = src[indexSrc];

	/* Null-terminate dest */
	dest[indexNum + indexSrc] = '\0';

	return (dest);
}
