#include "main.h"
/**
 * leet - Entry level
 * @str: An input string
 * Return: a string.
 */
char *leet(char *str)
{
	char *original = str; /*Store the original pointer*/
	char *leet_characters = "aAeEoOtTlL";/*Characters to be replaced*/
	char *leet_replacements = "43071";/*Corresponding replacements*/

	for (int i = 0; str[i] != '\0'; i++)
	{
		for (int j = 0; leet_characters[j] != '\0'; j++)
		{
			if (str[i] == leet_characters[j])
			{
				str[i] = leet_replacements[j];
				break;/*Exit the inner loop once a replacement is found*/
			}
		}
	}

	return (original);
}
