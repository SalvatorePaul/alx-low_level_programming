#include "main.h"
#include <stdio.h>
/**
 * _strcmp - a function that compares two strings.
 * @s1: first string
 * @s2: second string
 * @n: the maximum number of bytes to be copied from src
 * Return:  if str1 < str2, the negative difference of the first unmatched characters.
 * if str1 == str2, 0.
 * if str1 > str2, the positive difference of the first unmatched characters
 */

int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (equal);
}
