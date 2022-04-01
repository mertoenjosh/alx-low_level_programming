#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers
 *
 * @argc: number of args
 * @argv: args passed
 *
 * Return: 0 or 1
 */

int main(int argc, char **argv)
{
	char *ch = "Error";
	int x = 0;
	int y = 0;

	if (argc != 3)
	{
		printf("%s\n", ch);
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	printf("%d\n", x *y);
	return (0);
}

