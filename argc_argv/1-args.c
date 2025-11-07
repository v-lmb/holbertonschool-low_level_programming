#include <stdio.h>
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: character string table
 * Return: the number of arguments passed into it
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
