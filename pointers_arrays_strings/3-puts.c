#include "main.h"
#include <stdio.h>
/**
 * _puts - Entry point
 * @str: string
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
_putchar('\n');
}
