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
	int i, size;
	char *str2;

	if (str == NULL)
		return (NULL);

	size = _strlen(str);
	str2 = malloc((size * sizeof(*str)) + 1);

	if (str2 == NULL)
		return (NULL);

	i = 0;
	while (str[i])
	{
		str2[i] = str[i];
		i++;
	}
	return (str2);
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
