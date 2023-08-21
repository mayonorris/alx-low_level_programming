#include "main.h"

/**
 * puts_half - Entry point
 * Description: A function that prints half of a string,
 * followed by a new line.
 * @str: A string
 * Return: Nothing
 */
void puts_half(char *str)
{
	int len = 0, i, n;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	i = n;

	while (i < len)
		_putchar(str[i]);

	_putchar('\n');
}
