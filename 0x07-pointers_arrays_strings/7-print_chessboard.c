#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - A function that prints a chessboard
 * @a: An array input to print
 * Return: Nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c ", a[i][j]);
		}
		printf("\n");
	}
}
