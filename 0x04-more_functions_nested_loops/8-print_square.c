#include "main.h"
/**
 * print_square - A function that prints a square using #
 * @size: size of the square
 * Return: Always 0
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		i = 0;

		while (i < size)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
