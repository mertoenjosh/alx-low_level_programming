#include <stdio.h>

/**
 * main - Prints alphabet
 *
 * Return: 0
 *
 * /
int main(void)
{
	char x[26] = "abcdefghijklmnopqrst";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(x[i]);
	}
	putchar('\n');
	return (0);
}
