#include "main.h"
#include <stdio.h>

/**
 * _memset - a function that fills memory with a constant byte
 * @s: where the memory is pointed to
 * @b: char type represents the character to fill
 * @n: unsigned int variable the number of bytes to be filled
 * Return: A pointer to the filled memory area @s
 */
 
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int mem;

	for (mem = 0; mem < n; mem++)
		s[mem] = b;
	return (s);
}
