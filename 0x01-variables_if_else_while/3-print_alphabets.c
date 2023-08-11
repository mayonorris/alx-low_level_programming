#include <stdio.h>
/**
 * main - A progam that prints alphabe a-z and A-Z
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');

	while (ch <= 'Z')
		putchar(ch);
		ch++;
	putchar('\n');
	return (0);
}
