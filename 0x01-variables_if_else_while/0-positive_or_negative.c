#include <stdlib.h>
#include <time.h>
/**
 * main - prints "positive and 
 * negative statements"
 * Return: 0 set return
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ( n > 0 ) {
		printf ("is positive\n");
	}
	else if ( n = 0 ) {
		printf ("is zero\n");
	}
	else if ( n < 0 ) {
		printf ("is negative\n");
	}
	return (0);
}
