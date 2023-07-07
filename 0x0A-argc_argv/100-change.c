#include <stdio.h>
#include <stdlib.h>

/**
 * minCoins - the minimum number of coins to make change for an amount of money.
 * amount: amount of money
 *
 * Return: 0
 */

int minCoins(int amount)
{
	if (amount < 0)
	{
		return (0);
	}
	int coins[] = {25, 10, 5, 2, 1};
	int numCoins = 0;
	int i = 0;
	
	while (amount > 0 && i < sizeof(coins) / sizeof(coins[0]))
	{
		numCoins += amount / coins[i];
		amount %= coins[i];
		i++;
	}
	return (numCoins);
}

/**
 * main - calculate the minimum number of coins to make change for an amount of money.
 * argc: argument counter
 * argv: argument vector
 *
 * Return: 1
 */

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int amount = atoi(argv[1]);
	int result = minCoins(amount);
	
	printf("%d\n", result);
	return (0);
}
