#include <stdio.h>
/**
 * main - Prints all combinations of  of single-digit numbers.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
		for (j = 0; j <= 9; j++)
			if (i < j)
				putchar(i + '0');
				putchar(',');
				putchar(j + '0');
				putchar(' ');
	putchar('\n');

	return (0);
}

