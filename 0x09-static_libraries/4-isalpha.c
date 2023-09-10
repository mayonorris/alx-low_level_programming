#include "main.h"
/**
 * _isalpha - A program that checks if an input is alphabetic charcter.
 * @c: Input to be checked
 * Return: 1 if alphabetic and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
