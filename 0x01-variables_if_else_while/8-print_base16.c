#include <stdio.h>
/**
 * main - Print hexadecimal
 * Return: 0 (Success)
 */
int main(void)
{
	char ch_hexa;

	for (ch_hexa = '0'; ch_hexa <= '9'; ch_hexa++)
		putchar(ch_hexa);

	for (ch_hexa = 'a'; ch_hexa <= 'f'; ch_hexa++)
		putchar(ch_hexa);

	putchar('\n');

	return (0);
}

