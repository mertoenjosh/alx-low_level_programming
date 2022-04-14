#include "variadic_functions.h"

/**
 * sum_them_all -  returns the sum of all its parameters
 *
 * @n: constant unsigned int
 *
 * Return: result of the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list nums;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(nums, n);
	
	while (i < n)
	{
		sum += va_arg(nums, int);
		i++;
	}
	va_end(nums);
	return (sum);
}
