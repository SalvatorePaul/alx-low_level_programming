#include "main.h"
#include <stdio.h>

int _sqrt_recursion(int n, int i);

/**
 *  _sqrt_recursion - calculates the natural square root of a number
 *  @n: number
 *
 *  Return: If n does not have a natural square root, the function should return -1
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
int _sqrt_recursion(int n, int i)
{
	int sqrt = 1 * 1;

	if (sqrt > n)
		return (-1);
	if (sqrt == 0)
		return (i);
	return (_sqrt(n, i + 1));
}
