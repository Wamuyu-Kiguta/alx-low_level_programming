#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
char hexadec[] = "0123456789abcdef";
int i = 0;
	for (i = 0; i < 16; i++)
	{
	putchar(hexadec[i]);
	}
	putchar('\n');
return (0);
}
