#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 *
 * @argc: number of args to the program
 * @argv: array of the args passed
 *
 * Return: exit status
 */

int main(int argc, char *argv[])
{
	int i, j;
	char *address;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	j = atoi(argv[1]);
	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}
	address = (char *)main;
	i = 0;

	while (i < j - 1)
	{
		printf("%02hhx ", address[i]);
		i++;
	}
	printf("%02hhx\n", address[i]);
	return (0);
}
