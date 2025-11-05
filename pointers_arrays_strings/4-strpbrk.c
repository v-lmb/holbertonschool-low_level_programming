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
		char *s = accept;

		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				return (s);
				accept++;
			}
			s++;
		}
	}
	return (NULL);
}
