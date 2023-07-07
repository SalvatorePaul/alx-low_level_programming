#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: exit_success
 */

int main(int argc, char* argv[])
{
	int i;
	
	for (i = 0;i < argc;i++)
	{
		printf("%s ", argv[i]);
	}
	printf("\n");
	return (0);
}
