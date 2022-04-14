#include "function_pointers.h"

/**
 * int_index - searches for an int
 *
 * @array: pointer to array of ints
 * @size: size num of el in array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: -1 or el index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	if (array != 0 && cmp != 0)
	{
		while (i < size)
		{
			if (cmp(array[i]) == 0)
				i++;
			else
				return (i);
		}
	}
	return (-1);
}
