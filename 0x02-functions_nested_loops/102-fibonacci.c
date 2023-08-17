#include <stdio.h>
/**
 * main - prints Fibonacci sequence (50)
 * Return: 0 (Success)
 */
int main(void)
{
	int count = 50;
	long long fib1 = 1, fib2 = 2;

	for (int i = 0; i < count - 1; i++)
	{	printf("%lld, ", fib1);
		long long next = fib1 + fib2;

		fib1 = fib2;
		fib2 = next;
	}
	printf("%lld\n", fib1);
	return (0);
}
