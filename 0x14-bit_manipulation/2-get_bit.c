#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: number
 * @index: index
 * Return: value at the given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;
	unsigned int j;

	i = 1;
	j = 0;
	while (i < 2147483648)
	{
		if (j == index)
		{
			if ((i & n) == 0)
				return (0);
			else
				return (1);
		}
		j++;
		i = i << 1;
	}
	return (-1);
}
