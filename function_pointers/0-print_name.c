#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - Entry point
 * @name: size of triangle
 * @f: pointer to function
 * Return: Always 0 (Success)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
