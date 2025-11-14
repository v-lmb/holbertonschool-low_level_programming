#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Entry point
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer to  new allocated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	size_t len1, len2;
	size_t copy_n;
	size_t total;
	size_t i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		copy_n = len2;
	else
		copy_n = n;

	concat = malloc(sizeof(char) * (len1 + copy_n + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	for (j = 0; j < copy_n; j++)
		concat[len1 + j] = s2[j];

	concat[len1 + copy_n] = '\0';
	return (concat);
}
