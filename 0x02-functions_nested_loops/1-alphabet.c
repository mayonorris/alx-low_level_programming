#include "main.h"
/**
 * main - A program that prints alphabet in lowercase
 * Return: 0 (Success)
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
