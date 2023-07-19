#include "function_pointers.h"

/**
* print_name - prints a name
* @name: name string
* @f: pointer to function
*
* Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

void print(char *name)
{
	printf("Name: %s\n", name);
}
