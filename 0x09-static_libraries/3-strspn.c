#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @accept: bytes to check from
 * @s: string to check against
 *
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	unsigned int flag = 0;
	int temp;

	while (s[i])
	{
		temp = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				temp++;
			}
			j++;
		}
		j = 0;
		if (temp == 0)
			break;

		flag++;
		i++;
	}
	return (flag);
}
