#include "main.h"

/**
 * main - prints all args
 *
 * @argc: number of the args
 * @argv: the args passed
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		_puts(argv[i]);
		i++;
	}
	return (0);
}
