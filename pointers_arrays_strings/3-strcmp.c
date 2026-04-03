#include "main.h"
/**
 * _strcmp - Entry point
 * @s1: string1 *
 * @s2: string2 First machin
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }

    return (*s1 - *s2);
}
