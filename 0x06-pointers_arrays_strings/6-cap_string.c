#include "main.h"
/**
 * cap_string - Entry level
 * Return: a string.
 */
char *cap_string(char *str)
{
	bool new_word = true;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (new_word && islower(str[i]))
		{
			str[i] = toupper(str[i]);
			new_word = false;
		}
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			new_word = true;
		}
	}
	return (str);
}
