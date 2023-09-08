#include "main.h"
/**
 * is_prime_recursive - Check if a given number is prime.
 * @n: An input numer
 * @divisor: a possible divisor of n
 * Return: 0 if not prime and 1 else.
 *
 */
int is_prime_recursive(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}
	if (divisor == 1)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_recursive(n, divisor - 1));
}
/**
 * is_prime_number -  a function that returns 1
 *  if the input integer is a prime number, otherwise return 0
 *  @n: An input
 *  Return: 1 if n is prime and 0 otherwise.
 */
int is_prime_number(int n)
{
	return (is_prime_recursive(n, n / 2));
}
