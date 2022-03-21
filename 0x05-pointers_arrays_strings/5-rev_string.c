#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - prints a string in reverse
 * @s: the sprint passed to function
 *
 */

void rev_string(char *s)
{
	int i;
	char ch;

	for (i = 0; i < _strlen(s) / 2; i++)
	{
		ch = s[i];
		s[i] = s[_strlen(s) - 1 - i];
		s[_strlen(s) - 1 - i] = ch;
	}
}
