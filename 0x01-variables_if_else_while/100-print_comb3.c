#include <stdio.h>
/**
 * main -  Prints all differents possible combinations of two digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j;

	while (i < 9)
	{
		j = i + 1;
		while (j < 10)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i + j != 17)
			{
				putchar(',');
				putchar(' ');
			}
			else
			{
				putchar('\n');
			}
			j++;
		}
		i++;
	}

	return (0);
}
