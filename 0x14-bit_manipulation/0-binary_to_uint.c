#include "main.h"
#include "_pow_rec.c"

/**
 * _strlen - returns the length of a string.
 *
 * @s: pointer to an string
 * Return: int
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i += 1;
	}
	return (i);
}

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int len, exp = 0;
	unsigned int res = 0;

	if (b == NULL)
		return (0);
	len = _strlen(b);
	while (len-- && len >= 0)
	{
		if (b[len] == '1')
			res += _pow_rec(2, exp);
		else if (b[len] != '0')
			return (0);
		exp++;
	}
	return (res);
}
