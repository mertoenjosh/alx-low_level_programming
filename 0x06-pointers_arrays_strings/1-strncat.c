#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: The destination string
 * @src: The source string
 * @n: Number of max bytes to use
 *
 * Return: The concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		if (j != n)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		else
		{
			break;
		}
	}
	return (dest);
}
