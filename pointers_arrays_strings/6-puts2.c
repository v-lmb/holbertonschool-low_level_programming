#include "main.h"
#include <stdio.h>
/**
 * puts2 - Entry point
 * @str: string
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a += 2;
	}
_putchar('\n');
}
