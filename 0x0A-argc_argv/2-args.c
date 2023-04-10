#include <stdio.h>

/**
 * main - prints number of arguments passed to the program
 * @argc: size of array
 * @argv: the array
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
	puts(argv[i]);
	i++;
	}
	return (0);
}
