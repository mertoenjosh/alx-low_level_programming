#include <stdio.h>
/**
 * main - alphaBET
 *
 * Return: 0
 *
 */
int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	char ALPH[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alph[i]);
	}

	for (i = 0; i < 26; j++)
	{
		putchar(ALPH[j]);
	}
	putchar('\n');
	return (0);
}
