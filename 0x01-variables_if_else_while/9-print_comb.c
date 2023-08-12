#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int combin = 0;

	while (combin <= 9)

		putchar((combin % 10) + '0');
		combin++;
		if (combin <= 9)

			putchar(',');
			putchar(' ');

	putchar('\n');

	return (0);
}
