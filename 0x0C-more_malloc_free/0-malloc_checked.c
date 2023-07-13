#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: integer
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	
	if (ptr == NULL)
		_exit(98);
	return ptr;
}
