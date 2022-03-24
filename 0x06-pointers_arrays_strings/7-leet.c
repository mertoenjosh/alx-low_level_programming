#include "main.h"

/**
 * leet - encodes a string to leet
 * a -> 4, e -> 3, o -> 0, t -> 7, l -> 1 (1337)
 *
 * @str: the string to encode
 *
 * Return: char array of encoded string
 */

char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char *arr = "aAeEoOtTlL";
	char *enc = "4433007711";

	while (str[i])
	{
		while (arr[j])
		{
			if (str[i] == arr[j])
				str[i] = enc[j];
			j++;
		}
		j = 0;
		i++;
	}
	return (str);
}
