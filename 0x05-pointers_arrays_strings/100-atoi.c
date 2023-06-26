#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - function that convert a string to an integer.
 * @s: string to be converted
 * Return: If there are no numbers in the string, the function must return 0
 */

int _atoi(char *s)
{
	int sign = 1; /* Positive by default */
	int result = 0;
	int i = 0;

	/* Handle leading whitespace */
	while (s[i] == ' ')
	{
	i++;
	}
	/* Handle sign */
	if (s[i] == '-')
	{
	sign = -1;
	i++;
	}
	else if (s[i] == '+')
	{
	i++;
	}
	/* Convert digits to integer */
	while (s[i] >= '0' && s[i] <= '9')
	{
	/* Check for potential overflow before adding the next digit */
	if (result > (INT_MAX - (s[i] - '0')) / 10)
	{
	/* Overflow occurred, return the maximum or minimum value based on the sign */
	return (sign == 1) ? INT_MAX : INT_MIN;
	}
	result = result * 10 + (s[i] - '0');
	i++;
	}
	return result * sign;
}
