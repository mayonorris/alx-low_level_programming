#include <stdio.h>
/**
 * main - A progam that prints alphabe a-z and A-Z
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
		putchar(lowercase);
		lowercase++;
	while (uppercase <= 'Z')
		putchar(uppercase);
		uppercase++;
	putchar('\n');
	return (0);
}
