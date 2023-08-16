#include "main.h"

/**
 * print_times_table - print multiplication table up to n
 * @n: integer argument
 */

void print_times_table(int n)
{
	int nr;
	int nc;
	int p;

	if (n >= 0 && n <= 15)
	{
		nr = 0;
		while (nr <= n)
		{
			for (nc = 0; nc <= n; nc++)
			{	p = (nr * nc);
				if (nc == 0)
					_putchar('0' + p);
				else
				{
					_putchar(',');
					_putchar(' ');
					if (p <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + p);
					}
					else if (p > 9 && p < 100)
					{
						_putchar(' ');
						_putchar('0' + (p / 10));
						_putchar('0' + (p % 10));
					}
					else if (p >= 100)
					{
						_putchar('0' + (p / 100));
						_putchar('0' + ((p / 10) % 10));
						_putchar('0' + (p % 10));
					}
				}

			}
			nr++;
			_putchar('\n');
		}
	}
}
