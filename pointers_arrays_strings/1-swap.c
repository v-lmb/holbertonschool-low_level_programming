#include "main.h"
/**
 * swap_int - Entry point
 * @a: value
 * @b: value2
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int value = *a;

	*a = *b;
	*b = value;
}
