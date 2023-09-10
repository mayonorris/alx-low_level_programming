#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - A proogram that prints the minimum number of coins to
 * make change for an amount of money
 * @argc: The arguement counter
 * @argv: The argument values
 * Return: 1 if the number of arguments passed is not exactly
 * or 0 in otherwise
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	int coins[] = {25, 10, 5, 2, 1};
	int numCoins = sizeof(coins) / sizeof(coins[0]);
	int count = 0;

	for (int i = 0; i < numCoins; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}

