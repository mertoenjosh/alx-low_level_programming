#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 0; i <= 25; i++)
		{
			_putchar(alph[i]);
		}
		_putchar('\n');
	}
}
