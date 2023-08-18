#include "main.h"
/**
 * print_triangle -  a function that prints a triangle, followed by a new line.
 * @size: The size of the triangle
 * Return: Always 0
 */
void print_triangle(int size)
{
	int i = 0, j, k = size - 1;

	if (size > 0)
	{
		while (i < size)
		{
			for (j = 0; j < size; j++)
			{
				if (j < k)
					_putchar(' ');
				else
					_putchar('#');
			}
			k--;
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
