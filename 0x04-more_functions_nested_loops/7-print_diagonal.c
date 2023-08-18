#include "main.h"
/**
 * print_line - A program that draws a diagonal line
 * @n: number of times \ will be printed
 * Return: Always 0.
 *
 */
void print_line(int n)
{
	int i = 0, j;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
		_putchar(92);
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
