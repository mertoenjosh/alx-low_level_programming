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

	while (src[i] != '\0')
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
		i++;
	}
	return (dest);
}
