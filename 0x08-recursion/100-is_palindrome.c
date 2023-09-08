#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * is_palindrome_helper - This is a recursive helper function.
 * It takes a string s, and two indices
 * start and end indicating the current range being checked.
 * @s: An input string
 * @start : An integer
 * @end : An integer
 * Return: 0 if s is not a palindrome and 1 otherwise.
 */

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_palindrome_helper(s, start + 1, end - 1));
}
/**
 * is_palindrome - check if palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length <= 1)
	{
		return (1);
	}
	return (is_palindrome_helper(s, 0, length - 1));
}


