#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	/* Create a multi-byte variable with a known value */
	unsigned int i = 1;
	/* Access the first byte of the multi-byte variable */
	char *c = (char *)&i;

	/* If the first byte contains 1, it is little endian; */
	/* otherwise, it is big endian */
	return ((int)*c);

}
