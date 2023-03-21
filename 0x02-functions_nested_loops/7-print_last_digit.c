#include "main.h"
/**
 * print_last_digit - gets last digit of a number
 * @s: integer
 * Return: returns last digit
 */
int print_last_digit(int s)
{
int last;
if (s < 0)
{
s = -s;
}
last = s % 10;
if (last < 0)
{
	last = -last;
}
return (_putchar(last + '0'), last);
}
