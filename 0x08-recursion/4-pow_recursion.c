#include "main.h"

/**
 * _pow_recursion - calculate the power of a number
 *
 * @x: The base number
 * @y: The exponent number
 *
 * Return: The x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
