#include "main.h"

/**
 *  print_most_numbers - prints the numbers, from '0' to '9'
 *  excluding '2' and '4'
 *  followed by a new line.
 *
 * Return: None
 */

void print_most_numbers(void)
{
	int n = 0;

	for (n = 0; n <= 9; n++)
	{
	if (n != 2 && n != 4)
	{
	_putchar(n + '0');
	}
	}
	_putchar('\n');
}
