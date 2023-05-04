#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int new;
	int i, count = 0;

	for (i = 63; i >= 0; i--)

	{
	new = n >> 1;

	if (new & 1)
	{
	_putchar('1');
	count++;
	}
	else if (count)
		_putchar('0');
	}
	if (!count)
		_putchar('0');

}
