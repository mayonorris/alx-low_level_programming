#include <stdio.h>
/**
 * main - Prints all possible combination of three digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 8; i++)
	{
		j = i + 1;
		while (j < 9)
		{
			k = j + 1;
			while (k < 10)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i + j + k != 24)
				{
					putchar(',');
					putchar(' ');
				}
				else
				{
					putchar('\n');
				}
				k++;
			}
			j++;
		}
	}

	return (0);
}
