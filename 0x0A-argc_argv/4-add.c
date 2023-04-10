#include <stdio.h>
#include <stdlib.h>

/**
 * isNumeric - checks if a string is anumber or not
 * @str: string to be checked
 * Return: true if number, otherwise false
 */
int isNumeric(const char *str)
{
	while (*str != '\0')
	{
	if (*str < '0' || *str > '9')
		return (0);
	str++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: size of array
 * @argv: the array
 * Return: 0  success
 */
int main(int argc, char **argv)
{
	int i = 1, sum = 0;

	while (i < argc)
	{
	if (isNumeric(argv[i]) == 0)
	{
		puts("Error");
		return (1);
	}

	sum = sum + atoi(argv[i]);
	i++;

	}
	printf("%d\n", sum);
	return (0);

}
