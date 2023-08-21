#include "main.h"
/**
 * swap_int - Entry point
 * Description: A fuction that takes two integers and swaps their
 * values.
 *
 * @a: first integer
 * @b: second integer
 * Return: nothing.
 */
void swap_int(int *a, int *b);
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
