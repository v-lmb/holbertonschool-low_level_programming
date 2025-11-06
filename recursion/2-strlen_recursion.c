#include "main.h"
/**
 * _strlen_recursion - Entry point
 * @s: lenght string
 * Return: returns the length of a string
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count = _strlen_recursion(s + 1) + 1;
		return (count);
	}
	return (0);
}
