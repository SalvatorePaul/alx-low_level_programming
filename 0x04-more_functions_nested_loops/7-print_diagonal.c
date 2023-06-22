#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: n is the number of times the character \ should be printed
 * diagonal should end with a new line
 *
 * Return: print \n If n is 0 or less
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int i, j;

	for (i = 0; i < n; i++)
	{
	for (j = 0; j < i; j++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
	}
}
