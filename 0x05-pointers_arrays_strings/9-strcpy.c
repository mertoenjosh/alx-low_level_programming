#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy - a function that copies the string pointed to by src,
 *  including the terminating null byte (\0), 
 *  to the buffer pointed to by dest.
 *  @dest: destination
 *  @src: source
 *
 *  Return: returns a string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		++i;
	}
	dest[i + 1] = '\0';
	return (dest);
}
