#include <stdio.h>
#include "main.h"
/**
 * void - Entry point
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
