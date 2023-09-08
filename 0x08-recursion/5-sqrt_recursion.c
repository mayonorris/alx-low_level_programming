#include "main.h"
/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number.
 * @n : An input number
 * Return: -1 if n don't have a natural square root
 * the natural square root else.
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	while (i <= n / 2)
	{
		if (i * i == n)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
