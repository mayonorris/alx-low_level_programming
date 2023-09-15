#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - A function prints anyting.
 * @format: A list of type of arguments passed to the function.
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int num;
	float fnum;
	unsigned int i = 0;
	char c;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%d", num);
				break;
			case 'f':
				fnum = va_arg(args, double);
				printf("%f", fnum);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		if (format[i + 1] != '\0' && (format[i] == 'c' ||
					format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
