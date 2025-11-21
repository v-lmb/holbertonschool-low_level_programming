#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Entry point
 * @n: number
 * @separator: separator between numbers
 * Return: print numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(args, int));

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(args);
}
