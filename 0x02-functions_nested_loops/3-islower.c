#include "main.h"

/**
 * _islower -  prints a function that checks for lowercase character
 * @c: the character to be checked
 * Return: 1 for lowercase, 0 otherwise
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
