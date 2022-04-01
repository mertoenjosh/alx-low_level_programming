#include "main.h"

/**
 * _strstr - a function that locates a substring
 *
 * @needle: The substring
 * @haystack: the string
 *
 * Return: pointer to the substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *result;
	char *temp;
	int i = 0;

	while (haystack[i])
	{
		result = haystack;
		temp = needle;

		while (*temp == *haystack && *temp != '\0' && *haystack != '\0')
		{
			haystack++;
			temp++;
		}
		if (*temp == '\0')
			return (result);
		haystack = result + 1;
	}
	return (NULL);
}
