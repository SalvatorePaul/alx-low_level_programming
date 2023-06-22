#include "main.h"

/**
 * print_line - draws a straight line
 * @n: is the number of times the character _ should be printed
 * The line should end with a new line
 * Return: None
 */
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	while (i < n)
	{
	_putchar('_');
	i++;
	}
	_putchar('\n');
}
}
