#include "main.h"
#include "2-strlen_recursion.c"

/**
 * is_palindrome - gets a palindrome string
 *
 * @s: the string
 *
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int i = _strlen_recursion(s);

	if (i <= 1)
		return (1);
	else
		return (palindrome(s, i));
}

/**
 * palindrome - finds a palindrome string
 *
 * @s: The string
 * @i: length of the string
 *
 * Return: 0 or 1
 */

int palindrome(char *s, int i)
{
	if (*s != *(s + i - 1))
		return (0);
	else if (*s == '\0')
		return (1);
	else
		return (palindrome(s + 1, i - 2));
}
