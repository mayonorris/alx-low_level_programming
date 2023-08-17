#include <stdio.h>
/**
 * main - prints first 50 Fibonacci numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int n = 1;
	int max = 50;
	long a = 1;
	long b = 2;

	while (n <= max / 2)
	{
		printf("%li, ", a);
		printf("%li", b);
		a += b;
		b += a;
		n++;
		if (max % 2 == 1)
			printf("%li", a);
	}
	printf("\n");
	return (0);
}
