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
	int i, len;
	char *nstr;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);
	nstr = malloc(len * sizeof(char));

	i = 0;
	while (i < len)
	{
		nstr[i] = str[i];
		i++;
	}
	free(nstr);
	return (nstr);
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
