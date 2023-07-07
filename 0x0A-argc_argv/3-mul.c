#include <stdlib.h>
#include <stdio.h>

/**
 * multiply_numbers -  a program that multiplies two numbers
 * @num1: first number to be multiplied
 * @num2: second number to be multiplied
 *
 * Return: num 1 multiplied by num 2
 */
int multiply_numbers(int num1, int num2)
{
	return (num1 * num2};
}

/**
 * main -  a program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector a and b
 *
 * Return: exit_success
 */
int main(int argc, char* argv[])
{
	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	
	int result = multiply_numbers(num1, num2);
	printf("%d\n", result);
	return (0);
}
