#include "main.h"
/**
 * _strcat - Entry point
 * @dest: string1 Hello
 * @src: string2 World
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int s1 = 0;
	int s2 = 0;

	while (dest[s1] != '\0')
	{
		s1++;
	}
	while (src[s2] != '\0')
	{
		dest[s1] = src[s2];
		s1++;
		s2++;
	}
	dest[s1] = '\0';
	return (dest);
}
