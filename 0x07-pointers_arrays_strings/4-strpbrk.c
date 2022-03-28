#include "main.h"

/**
 * _strpbrk - a function that searches a string for
 * any of a set of bytes
 *
 * @accept: subset to search for
 * @s: the string to search from
 *
 * Return: pointer to the byte in s the match
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int temp;

	while (s[i])
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				temp = 1;
			}
			j++;
		}
		j = 0;
		if (temp == 1)
			return ((s + i));
		i++;
	}

	return (NULL);
}
