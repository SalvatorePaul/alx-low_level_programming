#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: the character to be checked
 * Return: 1 for lowercase, 0 for otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
	return (1);
	}
	return (0);
}
