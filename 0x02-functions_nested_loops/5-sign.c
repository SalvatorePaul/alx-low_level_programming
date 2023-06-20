#include "main.h"

/**
 * print_sign - a function that prints the sign of a number.
 * @n: the number(s) to be checked
 * Return: 1 for positive, 0 for zero, -1 fir negative or if not a digit.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	return ('\n');
}
