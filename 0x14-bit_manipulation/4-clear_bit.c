#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: pointer to the number
 * @index: index to set
 * Return: 1 if it worked, -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int j;

	j = 0;
	i = 1;
	while (i < 2147483648)
	{
		if (j == index)
		{
			*n = *n & ~(1 << index);
			return (1);
		}
		j++;
		i = i << 1;
	}
	return (-1);
}
