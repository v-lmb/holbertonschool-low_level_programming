#include "main.h"
#include <string.h>
/**
 * _strpbrk - Entry point
 * @s: initial segment
 * @accept: second segment verification
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
