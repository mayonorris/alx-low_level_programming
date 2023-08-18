#include "main.h"
/**
 * print_numbers - A fuction that prints numbers from 0 to 9 followed by
 * new line
 *
 * Return: 0 Always.
 */
void print_numbers(void);
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
