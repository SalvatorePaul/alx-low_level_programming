#include <stdlib.h>
#include <stdio.h>

/**
 * main -  a program that prints all arguments it receives.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: exit_success
 */

int main(int argc, char* argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%s ", argv[i]);
	}
	return (0);
}
