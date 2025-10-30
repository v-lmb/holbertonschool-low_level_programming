#include "main.h"
/**
 * _strncpy - Entry point
 * @dest: string1 *
 * @src: string2 First machin
 * @n: number
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;
	int i;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len && i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
