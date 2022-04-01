#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks if a charcter is a digit
 *
 * @c: character passed to the function
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
