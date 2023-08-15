#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
/* Declare variabbles*/
	char ch;
	int i;
	i = 1;
/* iterate through all the letters in the alphabet, from 'a' to 'z' */
	while (i < 11)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
  /*print a new line to the console.*/
		_putchar('\n');
		i++;
	}
}
