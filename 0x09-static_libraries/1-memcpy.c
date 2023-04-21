#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: memory where its stored
 * @src: memory where its copied
 * *@n: bytes to be copied
 * Return: copied memory with changed n bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
