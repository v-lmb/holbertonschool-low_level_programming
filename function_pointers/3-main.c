#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * @argc: number arguments
 * @argv: array arguments
 * Return: result of simple operation,
 * Error 98 if wrong number arguments,
 * Error 99 if wrong operator,
 * Error 100 if trie to divide or modulo 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		return (99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", func(a, b));
	return (0);
}
