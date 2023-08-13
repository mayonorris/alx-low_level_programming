#include <stdio.h>
/**
 * main - Entry level
 *
 * Description: A program that prints all two two digits combinations.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
	{
		j = i + 1;
		while (j < 100)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i != 98 && j != 99)
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
	}
	return (0);
}
