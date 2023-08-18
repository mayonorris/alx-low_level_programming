#include "main.h"
/**
 * print_line - A program that draws a diagonal line
 * @n: number of times \ will be printed
 * Return: Always 0.
 *
 */
void print_line(int n)
{
	if (n > 0)
	{
		int j = 1;

		while (j <= n)
		{
			_putchar("\\");
			j++;
		}

	}
	_putchar('\n');
}
