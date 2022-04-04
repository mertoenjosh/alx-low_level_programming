#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string
 * given as a parameter
 *
 * @str: string passed in the function
 *
 * Return: NULL or pointer to the string
 */

char *_strdup(char *str)
{
	unsigned int i, size;
	char *s;

	size = _strlen(str);
	s = malloc(size * sizeof(char));

	if (str == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}

/**
 * _strlen - finds the length of a string
 *
 * @s: the string passed in the function
 *
 * Return: size of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		++len;
		s++;
	}
	return (len);
}
