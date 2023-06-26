#include "main.h"

/**
 * puts_half -  function that prints half of a string, followed by a new line.
 * @str: string to be printted
 * @n: n = (length_of_the_string - 1) / 2
 * Return: if odd print n
 */

void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;

	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i + 1) / 2;

	for (; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
