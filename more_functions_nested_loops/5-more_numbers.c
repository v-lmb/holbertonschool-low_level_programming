#include "main.h"
/**
 * more_numbers - Entry point
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int count, i;

	for (count = 0; count < 10; count++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			_putchar('1');
			_putchar('0' + (i % 10));
		}
	_putchar('\n');
	}
}
