#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need to flip
 * to get from one number to another.
 *
 * @n: num 1
 * @m: num 2
 * Return: bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;
	unsigned long int j;

	j = n ^ m;
	i = 0;
	while (j > 0)
	{
		if ((j & 1) != 0)
			i++;
		j = j >> 1;
	}
	return (i);
}
