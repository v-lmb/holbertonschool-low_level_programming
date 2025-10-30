#include "main.h"
/**
 * _strncat - Entry point
 * @dest: string1 Hello
 * @src: string2 World
 * @n: number
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int s1 = 0;
	int s2 = 0;

	while (dest[s1] != '\0')
	{
		s1++;
	}
	while (s2 < n && src[s2] != '\0')
	{
		dest[s1] = src[s2];
		s1++;
		s2++;
	}
	dest[s1] = '\0';
	return (dest);
}
