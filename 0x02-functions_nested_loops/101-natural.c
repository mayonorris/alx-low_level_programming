#include <stdio.h>
/**
 * main - multiples of 3 below 1024 (excluded)
 * Return: 0 (Success)
 *
 */
int main(void)
{
	int n;
	int S;

	S = 0;
	n = 0;

	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			S = S + n;
		}
		n++;
	}
	printf("%d\n", S);

	return (0);
}
