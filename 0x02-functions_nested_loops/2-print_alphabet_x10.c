#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times
 * Return: None
 */

void print_alphabet_x10(void)
{
	char n;
	char i;

	for (n='a'; n <= 'z'; n++)
	{
	for (i = 0; i < 10; i++)
	{
	_putchar(n);
	}
	_putchar('\n');
}
}
