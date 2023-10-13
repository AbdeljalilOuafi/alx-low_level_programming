#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - function that prints char
 * @arg: arguments
 */
void print_char(va_list arg)
{
	char l;

	l = va_arg(arg, int);
	printf("%c", l);
}

/**
 * print_int -function that prints an int
 * Hym Boughrara
 * @arg: arguments
 */
void print_int(va_list arg)
{
	int n;

	n = va_arg(arg, int);
	printf("%d", n);
}

/**
 * print_float - function that prints a float
 * @arg: arguments
 */
void print_float(va_list arg)
{
	float n;

	n = va_arg(arg, double);
	printf("%f", n);
}

/**
 * print_string - function that prints a string
 * @arg: arguments
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - function that prints anything
 * based on the format specifier
 * Hym Boughrara
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list a;
	int i = 0, b = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(a, format);

	while (format && (*(format + i)))
	{
		b = 0;

		while (b < 4 && (*(format + i) != *(funcs[b].symbol)))
			b++;

		if (b < 4)
		{
			printf("%s", separator);
			funcs[b].print(a);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(a);
}
