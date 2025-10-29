#include "main.h"
#include <stdio.h>
/**
 * rev_string - Entry point
 * @s: string
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	int j = 0;
	char c;

	while (s[len] != '\0')
	len++;

	for (j = len - 1; i < (len / 2); i++, j--)
	{
		c = (s[i]);
		s[i] = s[j];
		s[j] = c;
	}
}
