#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - A function that print numbers
 *  followed by a new line.
 * @separator: An input string to separate numbers.
 * @n: number of parameters.
 * @...: Other parameters
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
