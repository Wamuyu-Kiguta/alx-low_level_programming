#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string whose length is to be found
 * Return: nothing on success
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;

	return (count);
}
