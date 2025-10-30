#include "main.h"
/**
 * print_triangle - Entry point
 * @size: size of triangle
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int ligne, espace, hash;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (ligne = 1; ligne <= size; ligne++)
	{
		for (espace = size - ligne; espace > 0; espace--)
		{
			_putchar(' ');
		}
		for (hash = 0; hash > ligne; hash++)
		{
			_putchar('#');
		}
		_putchar('#');
	_putchar('\n');
	}
}
