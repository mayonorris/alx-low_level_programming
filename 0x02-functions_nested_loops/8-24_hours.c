#include "main.h"
/**
 * jack_bauer - Prints each minute of the day
 * Return: nothing
 */
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h < 24; h++)
	{
		m = 0;

		while (m < 60)
		{
			_putchar('0' + (h / 10));
			_putchar('0' + (h % 10));
			_putchar(58);
			_putchar('0' + (m / 10));
			_putchar('0' + (m % 10));
			_putchar('\n');
			m++;
		}
		m = 0;

	}
}
