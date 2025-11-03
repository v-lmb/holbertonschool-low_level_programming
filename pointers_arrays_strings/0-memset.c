#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memset - Entry point
 * @s: pointeur vers la zone mémoire à remplir
 * @b: valeur (octet constant) avec laquelle on remplit la mémoire
 * @n: nombre d'octets à remplir dans la zone mémoire pointée par s
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
	s[i] = b;
}
return (s);
}
