#include "main.h"
/**
 * puts2 - Entry point
 * Description: A function that prints every other character
 * of a string, starting with the first
 * character, followed by a new line.
 * @str: A string
 * Return: Nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
