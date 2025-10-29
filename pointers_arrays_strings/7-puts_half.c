#include "main.h"
#include <stdio.h>
/**
 * puts_half - Entry point
 * @str: string
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int len = 0;
	int b;

	while (str[len])
	{
		len++;
	}
	b = (len + 1) / 2;
	while (b < len)
	{
		_putchar(str[b]);
		b++;
	}
_putchar('\n');
}
