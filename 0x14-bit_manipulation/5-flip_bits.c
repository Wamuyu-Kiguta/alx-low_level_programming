#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need to
 * flip to get from one number to another
 * @n: 1st number
 * @m: 2nd number
 * Return: number of bits needed to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned long int y = n * m;
	int i;
	int count = 0;

	for (i = 63; i >= 0; i--)
	{
	x = y >> i;
	if (x & 1)
		count++;
	}
	return (count);
}
