#include "main.h"
/**
 * puts2 - This function prints every character of a string
 * @str: The string to be printed
 * Return: None
 */

void puts2(char *str)
{
	int prt;

	for (prt = 0; str[prt] != '\0'; prt++)
	{
		if (prt % 2 == 0)
		_putchar(str[prt]);

	}
	_putchar('\n');
}
