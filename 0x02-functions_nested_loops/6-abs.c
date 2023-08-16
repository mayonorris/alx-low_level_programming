#include "main.h"
/**
 * _abs - Computes the absolute value of an integer.
 *@n: The number which absolute will be computed
 * Return: The absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -1 * n;
		return (n);
	}
	return (n);
}
