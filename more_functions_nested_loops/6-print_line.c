#include "main.h"
/**
 * print_line - Entry point
 * @n: number of times th character _ should be printed
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
		_putchar('_');
		}
		_putchar('\n');
	}
}
