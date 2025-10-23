#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
int n;
for (n = 0; n <= 9; n++)
{
putchar(n + '0');
}
for (n = 10; n <= 15; n++)
{
putchar('a' + n - 10);
}
putchar('\n');
return (0);
}
