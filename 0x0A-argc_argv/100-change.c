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
	int i, numCoins, count, cents;
	int coins[5];

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coins[0] = 25;
	coins[1] = 10;
	coins[2] = 5;
	coins[3] = 2;
	coins[4] = 1;
	numCoins = sizeof(coins) / sizeof(coins[0]);
	count = 0;

	for (i = 0; i < numCoins; i++)
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

