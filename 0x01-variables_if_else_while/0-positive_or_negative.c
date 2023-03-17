#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d if positive\n", n);
	}
	if (n == 0)
	{
		printf("%d if zero\n", n);
	}
	if (n < 0)
	{
		printf("%d if negative\n", n);
	}
	return (0);
}

