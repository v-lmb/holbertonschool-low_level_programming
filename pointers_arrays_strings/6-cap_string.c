#include "main.h"

/**
 * is_separator - checks if character is a separator
 * @c: character to check
 *
 * Return: 1 if separator, 0 otherwise
 */
int is_separator(char c)
{
	char sep[] = " \t\n,;.!?\"(){}";
	int i = 0;

	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @s: string
 *
 * Return: pointer to string
 */
char *cap_string(char *s)
{
	int i = 0;
	int capitalize = 1;

	while (s[i])
	{
		if (is_separator(s[i]))
		{
			capitalize = 1;
		}
		else if (capitalize && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - 32;
			capitalize = 0;
		}
		else
		{
			capitalize = 0;
		}
		i++;
	}
	return (s);
}
