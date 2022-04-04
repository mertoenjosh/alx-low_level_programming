#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: The first string
 * @s2: The second string
 *
 * Return: the new string or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, x, y;
	char *str2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 == "";

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}

	str2 = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
	if (str2 == NULL)
		return (NULL);

	x = 0;
	while (s1[x] != '\0')
	{
		str2[x] = s1[x];
		x++;
	}
	y = 0;
	while (s2[y] != '\0')
	{
		str2[x] = s2[y];
		x++;
		y++;
	}
	return (str2);
}
