#include "main.h"
/**
 * _isupper - Entry point
 * @c: int char
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
