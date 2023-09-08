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
	int i;
	int max = size * size;
	int d1_sum = 0;
	int d2_sum = 0;

	for (i = 0 i < max; i += size + 1)
		d1_sum += a[i];

	for (i = size - 1; i < max - 1; i += size - 1)
		d_2sum += a[i];

	printf("%d, %d\n", sum1, sum2);
}
