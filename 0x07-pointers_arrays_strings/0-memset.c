#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: memory area pointed
 * @n: first number of bytes to be filled
 * @b: the constant byte to be set
 *
 * Return: char pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
