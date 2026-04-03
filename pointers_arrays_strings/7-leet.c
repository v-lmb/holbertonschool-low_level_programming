#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";
	int i = 0;
	int j;

	while (s[i])
	{
		j = 0;
		while (letters[j])
		{
			if (s[i] == letters[j])
				s[i] = numbers[j];
			j++;
		}
		i++;
	}
	return (s);
}
