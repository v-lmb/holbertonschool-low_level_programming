#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memcpy - Entry point
 * @dest: pointeur vers la zone mémoire à remplir
 * @src: valeur (octet constant) avec laquelle on remplit la mémoire
 * @n: nombre d'octets à remplir dans la zone mémoire pointée par s
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
	dest[i] = src[i];
}
return (dest);
}
