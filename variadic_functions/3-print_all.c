#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - Prints char
 * @args: aguments
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_string - Prints string
 * @args: arguments
 */

void print_string(va_list args)
{
	char *string;

	string = va_arg(args, char *);
	if (string == NULL)
		string = "(nil)";
	printf("%s", string);
}

/**
 * print_int - Prints integer
 * @args: arguments
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints float
 * @args: arguments
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_all - Prints anything
 * @format: list of types
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *separator;
	int i = 0, j;
	print_form_t print_form[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	separator = "";
	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (*print_form[j].c == format[i])
			{
				printf("%s", separator);
				print_form[j].f(args, separator);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
