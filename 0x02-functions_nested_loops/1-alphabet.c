#include "main.h"
#include "_putchar.c"

/**
 * print_alphabet - print lower alphabet
 */

void print_alphabet(void)
{
	int i;
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		_putchar(alph[i]);
	}
	_putchar('\n');
}
