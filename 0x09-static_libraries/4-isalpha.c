#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: passed to the function
 *
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
