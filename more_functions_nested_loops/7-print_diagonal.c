#include "main.h"
/**
 * print_diagonal - Entry point
 * @n: number of times th character _ should be printed
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int ligne, espace;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (ligne = 0; ligne < n; ligne++)
	{
		for (espace = 0; espace < ligne; espace++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
