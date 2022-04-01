#include <stdio.h>

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
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
