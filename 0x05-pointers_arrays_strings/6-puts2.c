#include "main.h"
/**
 * puts2 - This function prints every character of an even string
 * @str: The string parameter input
 * Return: Noting
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	_putchar(str[i]);
	i += 2;
	}

	_putchar('\n');
}
