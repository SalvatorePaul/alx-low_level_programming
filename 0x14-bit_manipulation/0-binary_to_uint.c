#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: string of 1s and 0s in char form
*
* Return: Converted number
* 0 if there are one or more chars in b that are not 0 or 1
* 0 if b is null
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	
	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);/*Invalid character found, return 0*/
		result = (result << 1) | (*b - '0');/*Convert binary to decimal*/
		b++;
	}
	return (result);
}
