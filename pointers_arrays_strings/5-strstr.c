#include "main.h"
#include <string.h>
/**
 * _strstr - Entry point
 * @haystack: initial segment
 * @needle: second segment verification
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h != '\0')
	{

		while (*n != '\0')
		{
			if (*h == *n)
				return (h);
			h++;
		}
		n++;
	}
	return (NULL);
}
