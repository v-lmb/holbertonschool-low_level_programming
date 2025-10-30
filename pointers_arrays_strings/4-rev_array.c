#include "main.h"
/**
 * reverse_array - Entry point
 * @a: tabl inv
 * @n: nb elements
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
	}
}
