#include <stdio.h>
/**
 * main - print sum of even Fionacci sequence up to 4,000,000
 * Return: 0
 */

int main(void)
{
	int sum_evens = 0;
	int a;
	int b;
	int s = 1;

	a = 1;
	b = 1;

	while (b < 4000000)
	{
		s = a + b;
		a = b;
		b = s;
		if ((s <= 4000000) && (s % 2 == 0))
			sum_evens += s;
	}
	printf("%d\n", sum_evens);

	return (0);
}
