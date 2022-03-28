#include "main.h"
#include <stddef.h>


/**
 * _strchr - locates a character in a string
 *
 * @c: the character to locate
 * @s: the string to locate from
 *
 * Return: a pointer to the first occurence
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	
	while (s[i])
	{
		if (s[i] == c)
			return ((s+ i));
			
		i++;
	}
	return (NULL);
}
