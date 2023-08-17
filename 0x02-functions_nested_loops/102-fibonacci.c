#include <stdio.h>
/**
 * main - prints Fibonacci sequence (50)
 * Return: 0 (Success)
 */
int main(void)
{
	int count = 50;
	long  fib1 = 1, fib2 = 2;
	long next = fib1 + fib2;
	int i;

	for (i = 0; i < count - 1; i++)
	{	printf("%lid, ", fib1);

		fib1 = fib2;
		fib2 = next;
	}
	printf("%lid\n", fib1);
	return (0);
}
