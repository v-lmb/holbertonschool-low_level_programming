#include "main.h"
#include <stdio.h>
/**
 * print_rev - Entry point
 * @s: string
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	a--;
	while (a >= 0)
	{
		a--;
		_putchar(s[a]);
	}
_putchar('\n');
}
