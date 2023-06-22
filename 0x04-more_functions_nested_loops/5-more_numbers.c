#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times
 * Return: None
 */

void more_numbers(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			int t = n / 10;
			int o = n % 10;

			if (t > 0)
			_putchar(t + '0');

			_putchar(o + '0');
		}
		_putchar('\n');
	}
}
