#include "main.h"
/**
 * factorial - A function that returns the factorial of a given number.
 * @n: An input number
 * Return: -1 if n lower than 0, 1 if n is less or equal to
 * 1, the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
