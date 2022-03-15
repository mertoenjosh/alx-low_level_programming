#include "main.h"
#include "_putchar.c"
/**
 * main -print alphabet
 *
 * Return: 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}

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
