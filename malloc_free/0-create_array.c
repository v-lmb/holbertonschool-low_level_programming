#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Entry point
 * @size: size of char array
 * @c: character
 * Return: an array of chars, and initializes it with a specific char
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));
	if (array == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
return (array);
}
