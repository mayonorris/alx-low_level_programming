#include <stdio.h>
/**
 * main - prints the largest prime factor of 612852475143
 * Return: Always 0.
 */
int main(void)
{
	long num = 612852475143;
	long largest = 2;

	while (num > 1)
	{
		if (num % largest == 0)
		{
			num /= largest;
		}
		else
		{
			largest++;
		}
	}

	printf("%ld\n", largest);
	return (0);
}

