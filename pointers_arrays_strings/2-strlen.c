#include "main.h"
#include <string.h>
/**
 * _strlen - Entry point
 * @s: string
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
return (len);
}
