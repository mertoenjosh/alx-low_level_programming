#include "main.h"

/**
 * swap_int - swaps two ints
 * @a: first int
 * @b: second int
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
