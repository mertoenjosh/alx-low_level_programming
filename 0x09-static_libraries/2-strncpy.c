#include "main.h"

/**
 * _strncpy - copy upto nth char
 *
 * @dest: The destination string
 * @src: The source string
 * @n: the nth char
 *
 * Return: the copied string i.e dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i != n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
