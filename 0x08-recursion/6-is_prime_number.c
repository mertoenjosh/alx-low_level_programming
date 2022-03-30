#include "main.h"

/**
 * is_prime_number - finds a prime number
 *
 * @n: the number
 *
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (getPrime(n, 2));
}

/**
 * getPrime - calculates the prime number
 *
 * @x: the first num
 * @y: the second num
 *
 * Return: 1 or 0
 */

int getPrime(int x, int y)
{
	if (y == 1)
		return (0);
	if (x % y == 0)
		return (1);
	return (getPrime(x, y + 1));
}
