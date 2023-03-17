#include <stdio.h>

/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
char b = 'z';
char c = 'Z';
	while (b <= 'z')
	{
	putchar(b);
	b++;
	}
	while (c <= 'Z')
	{
	putchar(c);
	c++;
	}
	putchar('\n');
return (0);
}

