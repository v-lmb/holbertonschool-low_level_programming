#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int D;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	D = n % 10;
	if (n > D)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, D);
	}
	else if (n < D)
	{
		printf("Last digit of %d is %d ans is less than 6 and not 0\n", n, D);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, D);
	}
return (0);
}
