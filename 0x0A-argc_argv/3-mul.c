#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that multiplies two numbers
 * @argc: The arguments counter
 * @argv: The arguments values
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	int result;

	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}

