#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit
 * @c: a function that checks for a digit '0' through '9'
 *
 * Return: None
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
