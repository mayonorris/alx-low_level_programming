#include "main.h"
/**
 * print_alphabet - prints alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
/* Declare a character variable to contains alphabet*/
	char ch;
/* iterate through all the letters in the alphabet, from 'a' to 'z' */
	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
  /*print a new line to the console.*/
	_putchar('\n');
}
