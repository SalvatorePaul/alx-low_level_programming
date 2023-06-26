#include "main.h"

/**
 * print_array - prints n elements of an array of integers,
 *  followed by a new line.
 *  @a: the string element parameter input
 *  @n: number of elements of the array to be printed
 *  Return: None
 */

void print_array(int *a, int n)
{
		int arr;

		for (arr = 0; arr < n; arr++)
		{
			printf("%d", a[arr]);

			if (arr != (n - 1))
			printf(", ");
		}
			printf("\n");

}
