#include "main.h"

/**
 * print_binary_recursive - A recursive function to print binary representation
 * @n: The number to be converted and printed
 */
void print_binary_recursive(unsigned long int n)
{
	if (n == 0)
		return;

	print_binary_recursive(n >> 1);
	_putchar((n & 1) + '0');
}

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be converted and printed
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_binary_recursive(n);
}

