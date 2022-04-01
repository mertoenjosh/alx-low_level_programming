#include "main.h"

/**
 * main - prints the name of the program
 *
 * @argc: number of arguments passed to the func
 * @argv: an arry of the argc
 *
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char **argv)
{
	char *name = argv[0];
	int i = 0;

	while (name[i])
	{
		_putchar(name[i]);
		++i;
	}
	_putchar('\n');

	return (0);
}
