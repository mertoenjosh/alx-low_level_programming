#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: destination memory
 * @src: source memory
 * @b: the constant byte to be set
 *
 * Return: char pointer to dest memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = 0;

	while (n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	return (dest);
}
