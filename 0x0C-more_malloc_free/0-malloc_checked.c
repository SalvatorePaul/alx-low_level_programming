#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: integer
 *
 * Return:Returns a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
        void *ptr = malloc(b);
        
        if (ptr == NULL)
        {       
                fprintf(stderr, "malloc failed\n");
                _exit(98);
        }        
        return ptr;
}
