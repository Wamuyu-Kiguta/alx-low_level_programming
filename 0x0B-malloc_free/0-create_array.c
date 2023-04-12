#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it
 * @size: size of unsigned int
 * @c: character
 * Return: NULL if size = 0, or pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;
	{
	if (size == 0)
		return (NULL);
	}
	arr = (char *)(malloc(size * sizeof(char)));
	if (!arr)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
