#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - A function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: a square matrix of integers
 * @size: An input integer with the size of matrix
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int diag1_sum = 0;
	int diag2_sum = 0;

	for (int i = 0; i < size; i++)
	{
		diag1_sum += *(a + i * size + i);
		diag2_sum += *(a + i * size + (size - i - 1));
	}
	printf("%d, %d\n", diag1_sum, diag2_sum);
}
