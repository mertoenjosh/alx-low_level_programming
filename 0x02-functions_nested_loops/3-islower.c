#include <ctype.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: passed to the function
 *
 * Return: 0 or 1
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
