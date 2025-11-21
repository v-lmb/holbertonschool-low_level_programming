#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Entry point
 * @n: number
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list list;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		sum = va_arg(list, int) + sum;
	}
	va_end(list);
	return (sum);
}
