#include "main.h"
/**
 * _root - Search for the square root of n
 *
 * @n: An input number
 * @root: root
 * Return: natural square root, or -1 if not natural root
 */
int _root(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (_root(n, root + 1));
}

/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number.
 * @n : An input number
 * Return: -1 if n don't have a natural square root
 * the natural square root else.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_root(n, 0));
}
