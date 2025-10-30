#include "main.h"
/**
 * _strcmp - Entry point
 * @s1: string1 *
 * @s2: string2 First machin
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[1] != s2[i])
		return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
