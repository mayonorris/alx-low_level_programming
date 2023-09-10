#include "main.h"
/**
 * _islower - a program that checks if a charcter is lowercase or not
 * @c: character checked
 * Return: 1 if lowercase and 0 if not.
 */
int _islower(int c)
{
	if (c < 97 || c > 122)
	{
		return (0);
	}
	return (1);
}
