#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural square root
 *
 * @n: the number
 *
 * Return: sqrt or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (getSqrt(n, 1));
}

/**
 * getSqrt - gets the square roots
 * @sqr: the square number we want to find squareroot
 * @i: trial from one to the number
 * Return: Int squareroot
 */

int getSqrt(int sqr, int i)
{
	if ((i * i) == sqr)
		return (i);
	else if ((i * i) < sqr)
		return (getSqrt(sqr, i + 1));
	else
		return (-1);
}
