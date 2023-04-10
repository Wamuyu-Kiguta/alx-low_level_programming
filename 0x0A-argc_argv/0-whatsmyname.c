#include <stdio.h>

/**
 * main -- prints the name of the program
 * @argc: size of array
 * @argv: array with elements
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	puts(argv[argc - 1]);
	return (0);
}
