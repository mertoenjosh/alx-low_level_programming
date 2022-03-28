#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: memory area pointed
 * @n: first number of bytes to be filled
 * @b: the constant byte
 *
 * Return: char pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	int j = n;

	while (s[i])
	{
		if (j < s[i])
			s[i] = b;
		i++;
	}
	return (s);
}
