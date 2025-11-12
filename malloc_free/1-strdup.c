#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Entry point
 * @str: string to copy
 * Return: an array of chars, and initializes it with a specific char
 */
char *_strdup(char *str)
{
int i = 0;
int j;
char *new_str;

	if (str == 0)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	new_str = malloc((i + 1) * sizeof(char));
	if (new_str == 0)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
		new_str[j] = str[j];
	}
	new_str[j] = '\0';
return (new_str);
}
