#include <stdio.h>
/**
 * main - Prints digits from 0 to 9 using putchar.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int digit = 0;

	while (digit < 10)
		putchar(digit + '0');
		digit++;

	putchar('\n');

	return (0);
}
