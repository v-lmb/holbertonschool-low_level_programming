#include "main.h"
/**
 * print_diagonal - Entry point
 * @n: number of times th character _ should be printed
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (i <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(' ');
			_putchar('\\');
		}
	_putchar('\n');
	}
}
