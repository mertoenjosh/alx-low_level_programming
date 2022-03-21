#include "main.h"

/**
 * puts2 - prints every other char of an input
 * @str: string passed to the function
 *
 */

void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (i % 2 == 0)
			_putchar(*str);

		++i;
		str++;
	}
}
