#include <stdio.h>
/**
 * main -  Prints all differents possible combinations of two digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j = 1;

	while (i < 10)
		while (j < 10)
			putchar(i + '0');
			putchar(j + '0');
			putchar(',');
			putchar(' ');
			j++;
		i++;
	putchar('\n');

	return (0);
}
