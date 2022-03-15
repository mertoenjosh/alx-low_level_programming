#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - print _putchar
 *
 * Return: 0
 */

int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0 ; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
