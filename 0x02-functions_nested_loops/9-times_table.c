#include "main.h"

/**
 * times_table - print multiplication table
 */

void times_table(void)
{
	int nr;
	int nc;
	int p;

	for (nr = 0; nr <= 9; nr++)
	{
		nc = 0;

		while (nc  <= 9)
		{
			p = (nr * nc);

			if (nc == 0)
			{
				_putchar('0' + p);
			}
			else if (p <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + p);
			}
			else if (p > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (p / 10));
				_putchar('0' + (p % 10));
			}
			nc++;
		}
		_putchar('\n');
	}
}
