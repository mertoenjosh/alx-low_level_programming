#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: pointer to the number
 * @index: index to change
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int j;
	(void) index;

	i = 1;
	j = 0;
	while (i < 2147483648)
	{
		if (j == index)
		{
			*n  = *n | 1 << index;
			return (1);
		}
		j++;
		i = i << 1;
	}
	return (-1);
}
