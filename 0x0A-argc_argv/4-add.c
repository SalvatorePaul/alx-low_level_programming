#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main -  a program that adds positive numbers.
 * @argc: argument count
 * @argv: argument vector a and b
 *
 * Return: exit_success
 */

int main(int argc, char* argv[])
{
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		int result = add_positive_numbers(argv + 1, argc - 1);
		if (result == -1)
	{
		printf("Error\n");
		return (1);
	}
		printf("%d\n", result);
	}
	return (0);
}
