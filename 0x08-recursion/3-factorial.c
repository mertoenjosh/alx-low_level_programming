#include "main.h"

/**
 * factorial - calculate the factorial of a number
 *
 * @n: number passed
 *
 * Return: factorial, -1 or 1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

