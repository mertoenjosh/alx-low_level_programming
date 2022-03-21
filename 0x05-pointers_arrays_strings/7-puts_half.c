#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints half of the string
 *
 * @str: a string fed in the function.
 */

void puts_half(char *str)
{
	int i;
	int j = 0;

	if (_strlen(str) % 2 != 0)
		j -= 1;
	for (i = (_strlen(str) - j) / 2 ; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
