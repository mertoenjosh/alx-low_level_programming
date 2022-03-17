#include <ctype.h>
#include "main.h"

/**
 * _isupper - checks if number is alpha
 *
 * @c: Passed to the function
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
