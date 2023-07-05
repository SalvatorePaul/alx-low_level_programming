#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * is_prime_number - function that returns prime mumber
 * @n: number
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
	return (0);
	}
	int sqrtN = sqrt(n);

	for (n = 2; i <= sqrtN; n++)
	{
	if (n % i == 0)
	{
	return (1);
	}
	}
}
